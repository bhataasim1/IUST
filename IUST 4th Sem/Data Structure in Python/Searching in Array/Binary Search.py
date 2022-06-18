def BinarySearch(arr, n, x):
    start = 0;
    end = n;
    for i in range(len(arr)):
        mid = (start + end) // 2;
        if(arr[mid] == x):
            return mid;
        elif(arr[mid] > x):
            end = mid -1;
        else:
            start = mid +1;
    return -1;

arr = [1,2,3,4,5,6,7]
n = len(arr)
find = int(input("Enter the Element to find "))

result = BinarySearch(arr, n, find)
if(result == -1):
    print("Not in Array")
else:
    print("In array at index", result)
