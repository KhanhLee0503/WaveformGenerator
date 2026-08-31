#!/usr/bin/env python3
"""Generate rtl.f and tb.f file lists for Verilog/SystemVerilog projects.

Default project layout:
    Design/00_src/ -> Design/00_src/rtl.f
    Design/01_tb/  -> Design/01_tb/tb.f

The project root is read from the WG_HOME environment variable. Paths are
written using the literal ``$(WG_HOME)`` prefix so HDL tools can expand it.
"""

from __future__ import annotations

import argparse
import os
import sys
from pathlib import Path
from typing import Iterable

DEFAULT_EXTENSIONS = (".v", ".sv", ".vh", ".svh")


def parse_extensions(value: str) -> tuple[str, ...]:
    """Parse comma-separated extensions and normalize leading dots."""
    extensions: list[str] = []
    for item in value.split(","):
        item = item.strip().lower()
        if not item:
            continue
        extensions.append(item if item.startswith(".") else f".{item}")

    if not extensions:
        raise argparse.ArgumentTypeError("At least one extension is required")
    return tuple(dict.fromkeys(extensions))


def is_generated_or_hidden(path: Path) -> bool:
    """Ignore hidden files/directories and common generated directories."""
    generated_dirs = {
        "work",
        "results",
        "build",
        "out",
        "coverage",
        "__pycache__",
        ".git",
    }
    return any(part.startswith(".") or part in generated_dirs for part in path.parts)


def priority(path: Path) -> tuple[int, str]:
    """Provide deterministic compile ordering.

    SystemVerilog packages are placed first because they normally must be
    compiled before files that import them. Header files are listed next,
    followed by other design files in lexical order.
    """
    name = path.name.lower()
    suffix = path.suffix.lower()

    if name.endswith("_pkg.sv") or name.endswith("_package.sv"):
        group = 0
    elif suffix in {".vh", ".svh"}:
        group = 1
    else:
        group = 2

    return group, path.as_posix().lower()


def collect_files(root: Path, extensions: tuple[str, ...]) -> list[Path]:
    if not root.exists():
        raise FileNotFoundError(f"Directory does not exist: {root}")
    if not root.is_dir():
        raise NotADirectoryError(f"Not a directory: {root}")

    files = [
        path.resolve()
        for path in root.rglob("*")
        if path.is_file()
        and path.suffix.lower() in extensions
        and not is_generated_or_hidden(path.relative_to(root))
    ]
    return sorted(files, key=priority)


def write_filelist(
    output_file: Path,
    source_files: Iterable[Path],
    *,
    add_incdirs: bool,
    project_root: Path,
) -> int:
    output_file = output_file.resolve()
    output_file.parent.mkdir(parents=True, exist_ok=True)

    source_files = list(source_files)
    lines: list[str] = []

    if add_incdirs:
        include_dirs = sorted({path.parent for path in source_files})
        lines.extend(
            f"+incdir+$(WG_HOME)/{directory.relative_to(project_root).as_posix()}"
            for directory in include_dirs
        )
        if include_dirs and source_files:
            lines.append("")

    lines.extend(
        f"$(WG_HOME)/{path.relative_to(project_root).as_posix()}"
        for path in source_files
    )

    content = "\n".join(lines)
    if content:
        content += "\n"
    output_file.write_text(content, encoding="utf-8")
    return len(source_files)


def build_parser(project_root: Path) -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description="Recursively generate rtl.f and tb.f for HDL tools.",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
    )
    parser.add_argument(
        "--rtl-dir",
        type=Path,
        default=project_root / "00_src",
        help="RTL source directory",
    )
    parser.add_argument(
        "--tb-dir",
        type=Path,
        default=project_root / "01_tb",
        help="Testbench source directory",
    )
    parser.add_argument(
        "--output-dir",
        type=Path,
        default=None,
        help=(
            "Put both rtl.f and tb.f in this directory; by default each "
            "file is written into its corresponding source directory"
        ),
    )
    parser.add_argument(
        "--extensions",
        type=parse_extensions,
        default=DEFAULT_EXTENSIONS,
        help="Comma-separated source extensions",
    )
    parser.add_argument(
        "--add-incdirs",
        action="store_true",
        help="Add +incdir+ entries for all source directories",
    )
    parser.add_argument(
        "--dry-run",
        action="store_true",
        help="Print generated contents without writing files",
    )
    return parser


def preview(
    name: str,
    files: list[Path],
    add_incdirs: bool,
    project_root: Path,
) -> None:
    print(f"--- {name} ---")
    if add_incdirs:
        for directory in sorted({path.parent for path in files}):
            relative_dir = directory.relative_to(project_root).as_posix()
            print(f"+incdir+$(WG_HOME)/{relative_dir}")
        if files:
            print()
    for path in files:
        relative_path = path.relative_to(project_root).as_posix()
        print(f"$(WG_HOME)/{relative_path}")


def main() -> int:
    vvc_home = os.environ.get("WG_HOME")
    if not vvc_home:
        print(
            "ERROR: WG_HOME is not set. Run 'source SourceMe.sh' first.",
            file=sys.stderr,
        )
        return 2

    project_root = Path(vvc_home).expanduser().resolve()
    if not project_root.is_dir():
        print(
            f"ERROR: WG_HOME is not a directory: {project_root}",
            file=sys.stderr,
        )
        return 2

    args = build_parser(project_root).parse_args()

    rtl_dir = args.rtl_dir.resolve()
    tb_dir = args.tb_dir.resolve()
    output_dir = args.output_dir.resolve() if args.output_dir else None
    rtl_output = (output_dir or rtl_dir) / "rtl.f"
    tb_output = (output_dir or tb_dir) / "tb.f"

    try:
        rtl_files = collect_files(rtl_dir, args.extensions)
        tb_files = collect_files(tb_dir, args.extensions)
    except (FileNotFoundError, NotADirectoryError) as error:
        print(f"ERROR: {error}", file=sys.stderr)
        return 1

    if args.dry_run:
        preview("rtl.f", rtl_files, args.add_incdirs, project_root)
        preview("tb.f", tb_files, args.add_incdirs, project_root)
        return 0

    rtl_count = write_filelist(
        rtl_output,
        rtl_files,
        add_incdirs=args.add_incdirs,
        project_root=project_root,
    )
    tb_count = write_filelist(
        tb_output,
        tb_files,
        add_incdirs=args.add_incdirs,
        project_root=project_root,
    )

    print(f"Generated: {rtl_output} ({rtl_count} files)")
    print(f"Generated: {tb_output} ({tb_count} files)")

    if rtl_count == 0:
        print(f"WARNING: No RTL source files found in {rtl_dir}", file=sys.stderr)
    if tb_count == 0:
        print(f"WARNING: No testbench source files found in {tb_dir}", file=sys.stderr)

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
