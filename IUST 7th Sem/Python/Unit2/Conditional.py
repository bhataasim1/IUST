num = 20
if num > 0:
    print("Positive Number")
elif num < 0:
    print("Negative Number")
else:
    print("Zero")

#Loops
    
colours = ["Red", "Green", "Blue", "Black", "Orange"]
for i in colours:
    print(i)

for i in range(1, 10):
    print(i)

for i in "HEllo World":
    print(i)

person = {
    "name": "John",
    "age": 36,
    "country": "India",
    "city": "New Delhi"
}
for key in person:
    print(key)

for key, value in person.items():
    print(key, ":", value)

print(person.values())
person["name"] = "John Doe"
print(person)


for i in range(1, 10):
    if i == 2:
        continue
    elif i == 5:
        pass
    elif i == 8:
        break
    print(i)

total_sum = 0
for i in range(1, 100):
    if i % 2 == 0:
        total_sum += i
print("Sum of Even Numbers: ", total_sum)


tuple1 = (1, 2, 3, 4, 5)
tuple2 = (6, 7, 8, 9, 10)
print(tuple1 + tuple2)

tuple_into_List = list(tuple1)
tuple_into_List.append(tuple2)
print(tuple_into_List)

tuple3 = tuple(tuple_into_List)
print(tuple3)


myTuple = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
i = 0
while i < len(myTuple):
    print(myTuple[i])
    i += 1