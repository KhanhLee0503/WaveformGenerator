import numpy as np
import matplotlib.pyplot as plt


# ============================================================
# Configuration
# ============================================================

LUT_DEPTH = 4096
DATA_WIDTH = 24
FRAC_WIDTH = 22

OUTPUT_MEM_FILE = "ECG_LUT_4096x24.mem"
OUTPUT_PNG_FILE = "ECG_WAVEFORM.png"

# Chừa 10% headroom để tránh chạm full-scale khi xử lý biên độ
HEADROOM = 0.90


# ============================================================
# Gaussian function
# ============================================================

def gaussian(time, amplitude, center, width):
    """
    Generate one Gaussian pulse.

    amplitude : peak amplitude
    center    : normalized position in one ECG cycle
    width     : width of the pulse
    """
    return amplitude * np.exp(
        -0.5 * ((time - center) / width) ** 2
    )


# ============================================================
# Generate one synthetic ECG cycle
# ============================================================

# Create 4096 sample positions in [0, 1)
time = np.linspace(
    0.0,
    1.0,
    LUT_DEPTH,
    endpoint=False
)

p_wave = gaussian(time, +0.12, 0.20, 0.025)
q_wave = gaussian(time, -0.15, 0.37, 0.010)
r_wave = gaussian(time, +1.00, 0.40, 0.012)
s_wave = gaussian(time, -0.25, 0.43, 0.012)
t_wave = gaussian(time, +0.30, 0.65, 0.050)

ecg_raw = (
    p_wave
    + q_wave
    + r_wave
    + s_wave
    + t_wave
)


# ============================================================
# Step 1: Remove DC offset
# ============================================================

# Estimate baseline using samples near the beginning and end,
# where no P-QRS-T component should be present.
baseline_samples = np.concatenate(
    (
        ecg_raw[:200],
        ecg_raw[-200:]
    )
)

baseline = np.mean(baseline_samples)

ecg_zero_mean = ecg_raw - baseline


# ============================================================
# Step 2: Normalize amplitude
# ============================================================

maximum_absolute_value = np.max(
    np.abs(ecg_zero_mean)
)

if maximum_absolute_value == 0.0:
    raise ValueError("ECG waveform has zero amplitude")

ecg_normalized = (
    ecg_zero_mean
    / maximum_absolute_value
)

# Add headroom
ecg_normalized = (
    ecg_normalized
    * HEADROOM
)


# ============================================================
# Step 3: Convert floating-point to signed Q2.22
# ============================================================

scale_factor = 1 << FRAC_WIDTH

ecg_signed = np.round(
    ecg_normalized * scale_factor
).astype(np.int64)


# ============================================================
# Step 4: Saturate to signed 24-bit range
# ============================================================

signed_minimum = -(1 << (DATA_WIDTH - 1))
signed_maximum =  (1 << (DATA_WIDTH - 1)) - 1

ecg_signed = np.clip(
    ecg_signed,
    signed_minimum,
    signed_maximum
)


# ============================================================
# Step 5: Convert negative numbers to 24-bit two's complement
# ============================================================

data_mask = (1 << DATA_WIDTH) - 1

ecg_unsigned = (
    ecg_signed & data_mask
)


# ============================================================
# Step 6: Export hexadecimal .mem file
# ============================================================

hex_digit_count = (DATA_WIDTH + 3) // 4

with open(OUTPUT_MEM_FILE, "w") as mem_file:
    for sample in ecg_unsigned:
        mem_file.write(
            f"{int(sample):0{hex_digit_count}X}\n"
        )


# ============================================================
# Step 7: Check LUT boundary continuity
# ============================================================

boundary_difference_float = abs(
    ecg_normalized[-1]
    - ecg_normalized[0]
)

boundary_difference_lsb = abs(
    int(ecg_signed[-1])
    - int(ecg_signed[0])
)

first_slope = (
    int(ecg_signed[1])
    - int(ecg_signed[0])
)

last_slope = (
    int(ecg_signed[-1])
    - int(ecg_signed[-2])
)

slope_difference_lsb = abs(
    first_slope
    - last_slope
)


# ============================================================
# Print results
# ============================================================

print("========================================")
print("ECG LUT generation completed")
print("========================================")

print(f"LUT depth              : {LUT_DEPTH}")
print(f"Data width             : {DATA_WIDTH} bits")
print(f"Fixed-point format     : Q2.{FRAC_WIDTH}")
print(f"Headroom               : {HEADROOM:.2f}")

print("----------------------------------------")

print(f"Raw minimum            : {np.min(ecg_raw):.8f}")
print(f"Raw maximum            : {np.max(ecg_raw):.8f}")
print(f"Estimated baseline     : {baseline:.8e}")

print("----------------------------------------")

print(f"Normalized minimum     : {np.min(ecg_normalized):.8f}")
print(f"Normalized maximum     : {np.max(ecg_normalized):.8f}")

print("----------------------------------------")

print(f"Signed minimum         : {np.min(ecg_signed)}")
print(f"Signed maximum         : {np.max(ecg_signed)}")

print("----------------------------------------")

print(f"First sample signed    : {int(ecg_signed[0])}")
print(f"Last sample signed     : {int(ecg_signed[-1])}")

print(
    f"Boundary difference    : "
    f"{boundary_difference_float:.8e}"
)

print(
    f"Boundary difference    : "
    f"{boundary_difference_lsb} LSB"
)

print(
    f"Slope difference       : "
    f"{slope_difference_lsb} LSB"
)

print("----------------------------------------")

print(
    f"First sample hex       : "
    f"{int(ecg_unsigned[0]):06X}"
)

print(
    f"Last sample hex        : "
    f"{int(ecg_unsigned[-1]):06X}"
)

print("----------------------------------------")

print(f"Memory file            : {OUTPUT_MEM_FILE}")
print(f"Waveform image         : {OUTPUT_PNG_FILE}")


# ============================================================
# Plot waveform
# ============================================================

plt.figure(figsize=(12, 5))

plt.plot(
    time,
    ecg_normalized,
    label="Normalized ECG",
    linewidth=1.5
)

plt.scatter(
    [time[0], time[-1]],
    [ecg_normalized[0], ecg_normalized[-1]],
    color=["green", "red"],
    label="LUT boundaries",
    zorder=3
)

plt.title("Synthetic ECG Waveform")
plt.xlabel("Normalized time")
plt.ylabel("Normalized amplitude")
plt.grid(True)
plt.legend()
plt.tight_layout()

plt.savefig(
    OUTPUT_PNG_FILE,
    dpi=200
)

plt.show()
