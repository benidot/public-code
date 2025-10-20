from PIL import Image
import numpy as np
import soundfile as sf

# Load image
img = Image.open("white.jpg").convert("L")  # convert to grayscale for simplicity
width, height = img.size
data = np.array(img) / 255.0  # normalize 0–1

# Parameters
duration = 5.0               # seconds
samplerate = 44100
t = np.linspace(0, duration, int(samplerate * duration))

# Prepare audio buffer
audio = np.zeros_like(t)

# Map each row (or pixel band) to a frequency range
min_freq, max_freq = 200, 8000

for y in range(height):
    brightness = data[y]  # brightness values across width
    freq = min_freq + (y / height) * (max_freq - min_freq)

    # Interpolate brightness along time
    line = np.interp(t, np.linspace(0, duration, width), brightness)
    audio += line * np.sin(2 * np.pi * freq * t)

# Normalize
audio /= np.max(np.abs(audio))

sf.write("output3.wav", audio, samplerate)
