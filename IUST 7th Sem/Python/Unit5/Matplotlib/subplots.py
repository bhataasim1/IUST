import matplotlib.pyplot as plt
import numpy as np

#plot 1
x = np.array([1, 3, 4, 6])
y = np.array([5, 2, 7, 0])

plt.subplot(2, 3, 1)
plt.plot(x, y, '--b')

#plot 2
a = np.array([20, 14, 67])
b = np.array([23, 17, 100])

plt.subplot(2, 3, 2)
plt.plot(a, b, 'o:g')
plt.grid()


#plot 3

c = np.array([50, 57, 13, 67, 98])
d = np.array([67, 89, 45, 1, 23])

plt.subplot(2, 3, 3)
plt.plot(c, d, '-.r')

plt.grid()

plt.show()



x = np.array([5,7,8,7,2,17,2,9,4,11,12,9,6])
y = np.array([99,86,87,88,111,86,103,87,94,78,77,85,86])
plt.scatter(x, y, color = 'hotpink')

x = np.array([2,2,8,1,15,8,12,9,7,3,11,4,7,14,12])
y = np.array([100,105,84,105,90,99,90,95,94,100,79,112,91,80,85])
plt.scatter(x, y, color = '#88c999')

plt.show() 


y = np.array([35, 25, 25, 15])
mylabels = ["Apples", "Bananas", "Cherries", "Dates"]

plt.pie(y, labels = mylabels, startangle = 90)
plt.show() 