def Linear_Search(arr, n, find):
    for i in range(0, n):
        if(arr[i] == find):
            return i;
    return -1;

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
n = len(arr)
find = int(input("Enter the Element to Find : "))

result = Linear_Search(arr, n, find)
if(result == -1):
    print("Element is not in Array")
else:
    print("Element is in Array at Index : ", result)
