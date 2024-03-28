mySet = {1,2,3,4,5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
print(mySet)

for i in mySet:
    print(i)

print(2 in mySet) #True

mySet.add(11)
print(mySet)

mySet.remove(11)
print(mySet)

mySet.discard(11) #No error if element not found
print(mySet)

mySet.clear()
print(mySet)

set1 = {1,2,3,4,5}
set2 = {4,5,6,7,8}
set3 = {1,2,3,4,5,6,7,8, 9, 10}
print(set1.union(set2, set3))
print(set1.intersection(set2))
print(set1.difference(set2))
print(set2.difference(set1))
print(set1.symmetric_difference(set2))

set4 = set1 | set2
print(set4)

