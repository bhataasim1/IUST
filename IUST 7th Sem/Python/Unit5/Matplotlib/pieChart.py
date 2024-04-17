import matplotlib.pyplot as plt
import numpy as np

x = np.array([35, 20, 15, 27, 13])
fruits = ['Apple', 'Mango', 'Orange', 'Banana', 'Grapes']
plt.pie(x, labels=fruits, explode=[0.1, 0.1,0,0.1,0])
plt.show()