def Sum_of_Array(arr, n):
    sum = 0
    for i in range(len(arr)):
        sum += arr[i]
    return sum;

arr = [1, 2, 3, 4, 5, 6]
size = len(arr)
sum = Sum_of_Array(arr, size)
print("Sum of Elements of Array = ", sum)
