import os
import re


# ==========================================================
# Declaration Alignment
# ==========================================================
def align_declaration_block(block):

    entries = []

    max_dir = 0
    max_type = 0
    max_range = 0

    pattern = re.compile(
        r'^\s*'
        r'(?P<dir>input|output|inout)?\s*'
        r'(?P<type>logic|wire|reg)?\s*'
        r'(?P<range>\[[^\]]+\])?\s*'
        r'(?P<name>.+?)\s*$'
    )

    for line in block:

        if line.strip().startswith("//"):
            entries.append(("COMMENT", line))
            continue

        m = pattern.match(line)

        if not m:
            entries.append(("RAW", line))
            continue

        direction = m.group("dir") or ""
        datatype = m.group("type") or ""
        bitrange = m.group("range") or ""
        name = m.group("name")

        max_dir = max(max_dir, len(direction))
        max_type = max(max_type, len(datatype))
        max_range = max(max_range, len(bitrange))

        entries.append(
            (
                "DECL",
                direction,
                datatype,
                bitrange,
                name
            )
        )

    result = []

    for item in entries:

        if item[0] == "COMMENT":
            result.append(item[1])
            continue

        if item[0] == "RAW":
            result.append(item[1])
            continue

        _, direction, datatype, bitrange, name = item

        result.append(
            f"    "
            f"{direction.ljust(max_dir)} "
            f"{datatype.ljust(max_type)} "
            f"{bitrange.ljust(max_range)} "
            f"{name}"
        )

    return result


# ==========================================================
# Generic Operator Alignment
# ==========================================================
def align_operator_block(block, operator):

    parsed = []
    max_left = 0

    for line in block:

        if operator not in line:
            parsed.append((line, None))
            continue

        left, right = line.split(operator, 1)

        left = left.rstrip()

        max_left = max(
            max_left,
            len(left)
        )

        parsed.append(
            (
                left,
                right.strip()
            )
        )

    result = []

    for left, right in parsed:

        if right is None:
            result.append(left)
        else:
            result.append(
                f"{left.ljust(max_left)} "
                f"{operator} "
                f"{right}"
            )

    return result


# ==========================================================
# Instance Port Alignment
# ==========================================================
def align_instance_ports(block):

    parsed = []
    max_left = 0

    for line in block:

        if "(" not in line:
            parsed.append((line, None))
            continue

        left, right = line.split("(", 1)

        left = left.rstrip()

        max_left = max(
            max_left,
            len(left)
        )

        parsed.append(
            (
                left,
                right
            )
        )

    result = []

    for left, right in parsed:

        if right is None:
            result.append(left)
        else:
            result.append(
                f"{left.ljust(max_left)} ({right}"
            )

    return result


# ==========================================================
# Case Item Alignment
# ==========================================================
def align_case_items(block):

    parsed = []
    max_left = 0

    for line in block:

        if ":" not in line:
            parsed.append((line, None))
            continue

        left, right = line.split(":", 1)

        max_left = max(
            max_left,
            len(left.rstrip())
        )

        parsed.append(
            (
                left.rstrip(),
                right
            )
        )

    result = []

    for left, right in parsed:

        if right is None:
            result.append(left)
        else:
            result.append(
                f"{left.ljust(max_left)} :{right}"
            )

    return result


# ==========================================================
# Normalize
# ==========================================================
def normalize_sv(code):

    code = re.sub(
        r'always_ff\s*@\s*\(',
        'always_ff @(',
        code
    )

    code = re.sub(
        r'always_comb\s*@\s*\(',
        'always_comb @(',
        code
    )

    code = re.sub(
        r'\t',
        '    ',
        code
    )

    return code


# ==========================================================
# Indent Engine
# ==========================================================
def indent_sv_code(code):

    lines = code.splitlines()

    result = []

    indent = 0

    for line in lines:

        s = line.strip()

        if not s:
            result.append("")
            continue

        # decrease indent first

        if re.match(
            r'^(end|endcase|endgenerate|join|join_any|join_none)\b',
            s
        ):
            indent = max(indent - 1, 0)

        elif re.match(
            r'^else\b',
            s
        ):
            indent = max(indent - 1, 0)

        result.append(
            ("    " * indent) + s
        )

        # increase indent

        if s.endswith("begin"):
            indent += 1

        elif re.match(
            r'^case\b',
            s
        ):
            indent += 1

        elif re.match(
            r'^fork\b',
            s
        ):
            indent += 1

        elif re.match(
            r'^else\b.*begin$',
            s
        ):
            indent += 1

    return "\n".join(result)


# ==========================================================
# Main Alignment Engine
# ==========================================================
def align_sv_code(code):

    lines = code.split("\n")

    output = []

    i = 0

    while i < len(lines):

        line = lines[i]
        strip = line.strip()

        # ----------------------------------
        # Declaration
        # ----------------------------------

        if strip.startswith((
            "input",
            "output",
            "inout",
            "logic",
            "wire",
            "reg",
            "parameter",
            "localparam"
        )):

            block = []

            while (
                i < len(lines)
                and
                lines[i].strip().startswith((
                    "input",
                    "output",
                    "inout",
                    "logic",
                    "wire",
                    "reg",
                    "parameter",
                    "localparam"
                ))
            ):
                block.append(lines[i])
                i += 1

            output.extend(
                align_declaration_block(block)
            )

            continue

        # ----------------------------------
        # assign
        # ----------------------------------

        if strip.startswith("assign "):

            block = []

            while (
                i < len(lines)
                and lines[i].strip().startswith("assign ")
            ):
                block.append(lines[i])
                i += 1

            output.extend(
                align_operator_block(
                    block,
                    "="
                )
            )

            continue

        # ----------------------------------
        # port mapping
        # ----------------------------------

        if strip.startswith("."):

            block = []

            while (
                i < len(lines)
                and lines[i].strip().startswith(".")
            ):
                block.append(lines[i])
                i += 1

            output.extend(
                align_instance_ports(block)
            )

            continue

        # ----------------------------------
        # <=
        # ----------------------------------

        if "<=" in strip:

            block = []

            while (
                i < len(lines)
                and "<=" in lines[i]
            ):
                block.append(lines[i])
                i += 1

            output.extend(
                align_operator_block(
                    block,
                    "<="
                )
            )

            continue

        # ----------------------------------
        # case item
        # ----------------------------------

        if (
            ":" in strip
            and not strip.startswith("//")
        ):

            if (
                re.match(
                    r'^\w+\s*:',
                    strip
                )
                or strip.startswith("default:")
            ):

                block = []

                while (
                    i < len(lines)
                    and ":" in lines[i]
                ):
                    block.append(lines[i])
                    i += 1

                output.extend(
                    align_case_items(block)
                )

                continue

        output.append(line)

        i += 1

    return "\n".join(output)


# ==========================================================
# Process File
# ==========================================================
def process_file(input_file):

    try:

        with open(
            input_file,
            "r",
            encoding="utf-8"
        ) as f:

            content = f.read()

        aligned = align_sv_code(content)

        aligned = normalize_sv(aligned)

        aligned = indent_sv_code(aligned)

        name, ext = os.path.splitext(
            input_file
        )

        output_file = (
            f"{name}{ext}"
        )

        with open(
            output_file,
            "w",
            encoding="utf-8"
        ) as f:

            f.write(aligned)

        print(
            f"✅ {os.path.basename(input_file)}"
        )

        return True

    except Exception as e:

        print(
            f"❌ {input_file}"
        )

        print(e)

        return False


# ==========================================================
# Get All SV Files
# ==========================================================
def get_sv_files(rtl_path):

    file_list = []

    for root, dirs, files in os.walk(rtl_path):

        for file in files:

            if file.endswith(".sv"):

                file_list.append(
                    os.path.join(
                        root,
                        file
                    )
                )

    return file_list


# ==========================================================
# Main
# ==========================================================
def main():

    rtl_path = input(
        "RTL Folder: "
    ).strip()

    if not os.path.exists(rtl_path):

        print(
            "❌ Folder not found"
        )

        return

    file_list = get_sv_files(
        rtl_path
    )

    with open(
        "file_list.txt",
        "w",
        encoding="utf-8"
    ) as f:

        for item in file_list:
            f.write(item + "\n")

    print(
        f"\nFound {len(file_list)} SV files\n"
    )

    success = 0

    for file in file_list:

        if process_file(file):
            success += 1

    print("\n====================")
    print(
        f"Total   : {len(file_list)}"
    )
    print(
        f"Success : {success}"
    )
    print(
        f"Failed  : {len(file_list)-success}"
    )
    print("====================")


if __name__ == "__main__":
    main()