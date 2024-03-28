a = 5
print(a)

b = 5
c = 3
print(b + c)

d = "Learning Python"
print(d)

# Python DataTypes
a: int = 5
b = float(5.0)
c = str("Learning Python")
d = bool(True)


# name: str = str(input("Enter your Name: "))
# age: int = int(input("Enter your Age: "))
# print(f"Hello {name}, Your Age is {age}")

str1 = "Hello"
str2 = "World"
print(str1+str2)


x, y , z = 5, 10, 15
print("Assigned Multiple Valus: ",x, y, z)

fruits = ["Apple", "Banana", "Cherry"]
a, b, c = fruits # Unpacking
print(a, b, c)

# List
fruits = ["Apple", "Banana", "Cherry"]
print(fruits)

# Tuple
fruits = ("Apple", "Banana", "Cherry")
print(fruits)

# Set
fruits = {"Apple", "Banana", "Cherry", "Apple"}
print(fruits)

# Frozenset
fruits = frozenset({"Apple", "Banana", "Cherry", "Apple"})
print("Frozen Set ",fruits)

# Dictionary
student = {
    "name": "Ali",
    "age": 20
}
print(student)
print(student["name"])

a = 1
b = 2.4
c = 1j
print(type(a))
print(type(b))
print(type(c))