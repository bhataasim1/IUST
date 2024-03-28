myList = [1, 2, 3, 4, 5]
print(myList)

myList.append(6)
print(myList)

myList.insert(2, 7)
print(myList)

myList.remove(7)
print(myList)

myList[1] = 8 #Updates the value at index 1
print(myList)

myList.pop() #Removes the last element
print(myList)

for i in myList:
    print(i)

for i in range(len(myList)):
    print("Index : ",i, " Value: ", myList[i])


sliced_List = myList[::-1]
print("Sliced List = ",sliced_List)