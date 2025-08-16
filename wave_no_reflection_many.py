import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation

# Parameters
L = 20  # Length of the x-axis
N = 300  # Number of discrete points
t_max = 10  # Increased duration for slower animation
fps = 30  # Frames per second
speed = 0.04  # Decreased speed of wave movement
wavelength = 1  # Further decreased wavelength
amplitude = 1  # Decreased amplitude
birthtime = 20 # Time when the wave is born

# Space array
x = np.linspace(0, L, N)
y = np.zeros_like(x)  # All points initially at y = 0

# Initialize figure
fig, ax = plt.subplots(figsize=(18, 10))  # Adjust width and height as needed
ax.set_xlim(-0.1*L, 1.1*L)
ax.set_ylim(-7, 7)  # Set y-axis range
line, = ax.plot(x, y, '-o')  # Line connecting points

def my_new_wave(myamplitude, mywavelength, mydirection, mypropagation, mybirthdelay, myinitialposition, myspeed, index, myframe):
    direction_giver = 0
    motion = 0
    if mybirthdelay > myframe:
        appearance_factor = 0
    else:
        appearance_factor = 1  # Fully visible wave
    if mydirection == "up":
        direction_giver = 1
    elif mydirection == "down":
        direction_giver = -1
    if mypropagation == "forward":
        motion = 1
    elif mypropagation == "backward":
        motion = -1
    return myamplitude * appearance_factor * direction_giver * np.exp(-(((index - myinitialposition) - (motion * myspeed) * (myframe - mybirthdelay)) ** 2) / (2 * (mywavelength/2) ** 2))

# Update function
def update(frame):
    # Superposition of two waves moving in opposite directions
    y[:] = 0  # Reset y to zero for each frame
    y[:] += my_new_wave(1*amplitude, 0.5*wavelength, "up", "forward", 1*birthtime, 0*L, 2*speed, x, frame)
    y[:] += my_new_wave(1*amplitude, 1*wavelength, "up", "forward", 3*birthtime, 0*L, 6*speed, x, frame)
    y[:] += my_new_wave(1*amplitude, 1.5*wavelength, "up", "forward", 5*birthtime, 0*L, 10*speed, x, frame)


    y[:] += my_new_wave(1*amplitude, 0.5*wavelength, "down", "backward", 1*birthtime, 1*L, 2*speed, x, frame)
    y[:] += my_new_wave(1*amplitude, 1*wavelength, "down", "backward", 3*birthtime, 1*L, 6*speed, x, frame)
    y[:] += my_new_wave(1*amplitude, 1.5*wavelength, "down", "backward", 5*birthtime, 1*L, 10*speed, x, frame)
    
    
    line.set_ydata(y)  # Update line
    return line,

# Create animation
ani = animation.FuncAnimation(fig, update, interval=1000/fps, blit=False)
plt.show()
