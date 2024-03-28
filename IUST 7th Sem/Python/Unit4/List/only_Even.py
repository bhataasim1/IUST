def only_Even_Numbers(s: list):
    evenList = []
    for i in s:
        if i % 2 == 0:
            evenList.append(i)
    return evenList

myList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("Even numbers in the list are: ", only_Even_Numbers(myList))