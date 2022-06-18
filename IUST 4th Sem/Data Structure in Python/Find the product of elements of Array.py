def product_array(arr, n):
    pro = 1
    for i in range(len(arr)):
        pro *= arr[i]
    return pro

arr = [1, 2, 3]
s = len(arr)
p = product_array(arr, s)
print("Product of Elements of Array = ", p)
