import matplotlib
import matplotlib.pyplot as plt
import numpy as np

print(matplotlib.__version__)

x = np.array([1, 3, 5])
y = np.array([2, 4, 6])

plt.plot(x, y, 'o-.r', ms=10)

plt.xlabel('X-Axis')
plt.ylabel('Y-Axix')
plt.title('Random Line')
plt.grid()
plt.show()
