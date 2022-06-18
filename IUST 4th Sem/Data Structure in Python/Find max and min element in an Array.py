arr = [1, 2, 3, 4, 5, 6, 7]

max_no = len(arr)
min_no = len(arr)

for i in range(len(arr)):
    if(arr[i] > max_no):
        max_no = arr[i]
    elif(arr[i] < min_no):
        min_no = arr[i]

print("Max ", max_no, " Min " , min_no)
