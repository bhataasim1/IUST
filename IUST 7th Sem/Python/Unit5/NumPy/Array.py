import numpy as np

# Creating a 0D array
arr = np.array(42)
print(arr)
print(arr.dtype)

# Creating a 1D array
arr = np.array([1, 2, 3, 4, 5])
print(arr)
print(arr.dtype)
print(type(arr))

arr2 = np.array((1, 2, 3, 4, 5))
print(arr2)
print(type(arr2))

# Creating a 2D array
arr = np.array([[1, 2, 3], [4, 5, 6]], dtype='S')
print(arr)
print(arr[1, 1])
print("Dimensions ",arr.ndim)

# Creating a 3D array
arr = np.array([[[1,2,3], [4, 5, 6], [7, 8, 9]]])
print(arr)
print(arr[0, 1, 2])
print("Dimension = ",arr.ndim)

newArray = np.array([1, 2, 3, 4, 5, 6], ndmin=5)
print(newArray)
print("Dimension = ",newArray.ndim)

a = np.array([1, 2, 3, 4])
print(a[1] + a[3])


b = np.array([1,2,3,4,5,6,7,8,9,10, 11, 12])
bReshape = b.reshape(3, 2, 2)
print(bReshape)

bReshape = b.reshape(2, 3, 2)
print(bReshape)

c = np.array([[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]])
print(c.ndim)
for i in c:
    for j in i:
        for k in j:
            print("Item ",k)

for i in np.nditer(c):
    print("Item (using nditer) ",i)


print(c)
for index, item in np.ndenumerate(c):
    print("Index ",index, "Item ",item)