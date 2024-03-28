def sum_of_list(s: list) -> int:
    sum = 0
    for i in s:
        sum += i
    return sum

myList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("Sum of elements of list is: ", sum_of_list(myList))