def remove_duplicates(s: list):
    newList = []
    for i in s:
        if i not in newList:
            newList.append(i)
    return newList

myList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5]
print("List before removing duplicates: ", myList)
print("List after removing duplicates: ", remove_duplicates(myList))

# Another simple way
def another_remove_duplicates(s: list):
    return list(set(s))

myList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5]
print("List before removing duplicates: ", myList)
print("List after removing duplicates: ", another_remove_duplicates(myList))