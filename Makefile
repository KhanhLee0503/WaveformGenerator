SHELL       := /bin/bash
.SHELLFLAGS := -o pipefail -c

VERILATOR  			?= /usr/bin/verilator
SURFER      			?= surfer
TOP       			?= PHASE_ACCUMULATOR 
SIM_TOP             		?= PHASE_ACCUMULATOR_TB
SIM_TB              		?= 01_tb/PHASE_ACCUMULATOR_TB.sv
RUN_ARGS            		?=
RTL_DIR   			:= 00_src
FILE_LIST 			:= rtl.f
LOG_DIR   			:= logs/lint
LINT_LOG  			:= $(LOG_DIR)/lint.log
BUILD_DIR 			:= 02_sim/build/$(TOP)
COMPILE_LOG_DIR 		:= logs/compile
COMPILE_LOG     		:= $(COMPILE_LOG_DIR)/$(TOP).log
SIM_BUILD_DIR       		:= 02_sim/build/$(SIM_TOP)
SIM_RUN_DIR         		:= 02_sim/run/$(SIM_TOP)
SIM_BINARY          		:= $(abspath $(SIM_BUILD_DIR)/V$(SIM_TOP))
SIM_LOG             		:= $(abspath logs/sim/$(SIM_TOP).log)
WAVE                		?= $(SIM_RUN_DIR)/$(SIM_TOP).vcd

VERILATOR_COMMON_FLAGS := \
	--language 1800-2017 \
	--Wall \
	-Wno-fatal

.DEFAULT_GOAL := lint

.PHONY: help version surfer-version lint compile sim-compile run wave

help:
	@echo "Available targets:"
	@echo "  make lint                 Lint codefile and save output to $(LINT_LOG)"
	@echo "  make lint    TOP=<module> Lint another top module"
	@echo "  make compile              Compile SV code into a C++ model"
	@echo "  make compile TOP=<module> Compile another top module"
	@echo "  make sim-compile          Build the default SystemVerilog testbench"
	@echo "  make run                  Build and run the default testbench"
	@echo "  make run RUN_ARGS=<args>  Pass plusargs to the testbench"
	@echo "  make wave WAVE=<file>     Open a VCD, FST, or GHW waveform in Surfer"
	@echo "  make version              Show the Verilator version"
	@echo "  make surfer-version       Show the Surfer version"
	@echo "  make help                 Show this help"

version:
	$(VERILATOR) --version

surfer-version:
	$(SURFER) --version

lint:
	@mkdir -p $(LOG_DIR)
	@echo "Verilator lint log: $(LINT_LOG)"
	@cd $(RTL_DIR) && $(VERILATOR) $(VERILATOR_COMMON_FLAGS) \
		--lint-only \
		-f $(FILE_LIST) --top-module $(TOP) 2>&1 \
		| tee ../$(LINT_LOG)

compile:
	@mkdir -p $(BUILD_DIR) $(COMPILE_LOG_DIR)
	@echo "Verilator build directory: $(BUILD_DIR)"
	@echo "Verilator compile log: $(COMPILE_LOG)"
	@cd $(RTL_DIR) && $(VERILATOR) $(VERILATOR_COMMON_FLAGS) \
		--cc --build \
		-f $(FILE_LIST) --top-module $(TOP) \
		-Mdir ../$(BUILD_DIR) 2>&1 \
		| tee ../$(COMPILE_LOG)

sim-compile:
	@mkdir -p $(SIM_BUILD_DIR) $(dir $(SIM_LOG))
	@echo "Verilator simulation top: $(SIM_TOP)"
	@echo "Verilator simulation build directory: $(SIM_BUILD_DIR)"
	@cd $(RTL_DIR) && $(VERILATOR) $(VERILATOR_COMMON_FLAGS) \
		--binary --timing --trace -DDUMP_VCD \
		-f $(FILE_LIST) ../$(SIM_TB) --top-module $(SIM_TOP) \
		-Mdir ../$(SIM_BUILD_DIR) 2>&1 \
		| tee $(SIM_LOG)

run: sim-compile
	@mkdir -p $(SIM_RUN_DIR) $(dir $(SIM_LOG))
	@echo "Running: $(SIM_BINARY) $(RUN_ARGS)"
	@cd $(SIM_RUN_DIR) && $(SIM_BINARY) $(RUN_ARGS) 2>&1 \
		| tee -a $(SIM_LOG)
	@if [[ ! -s "$(WAVE)" ]]; then \
		echo "ERROR: Simulation did not create waveform: $(WAVE)" >&2; \
		exit 2; \
	fi
	@echo "Waveform: $(WAVE)"

wave:
	@if ! command -v "$(SURFER)" >/dev/null 2>&1; then \
		echo "ERROR: Surfer executable not found: $(SURFER)" >&2; \
		exit 1; \
	fi
	@if [[ -z "$(WAVE)" ]]; then \
		echo "ERROR: WAVE is required. Example: make wave WAVE=02_sim/waves/$(TOP).fst" >&2; \
		exit 2; \
	fi
	@if [[ ! -f "$(WAVE)" ]]; then \
		echo "ERROR: Waveform file not found: $(WAVE)" >&2; \
		exit 2; \
	fi
	$(SURFER) "$(WAVE)"
