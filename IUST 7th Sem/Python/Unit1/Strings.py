# Strings
a = "Hello, World!"
print(a[1])
print(a[2:5])
print(a[::-1])

# String Methods
a = "Hello, World!"
print(a.upper())

print(a.lower())

a = "    Hello, World!   "
print(a.strip())

a = "Hello, World!"
print(a.replace("H", "J"))
print(a.replace("Hello", "Python"))

str1 = "I am Learing Python Strings"
string_to_List = str1.split(" ")
print(string_to_List)
for i in string_to_List:
    print(i)

print(type(string_to_List))

message = "Welcome Here to Learn {}"
print(message.format("Python"))

message = "Welcome Here to Learn {} and {}"
print(message.format("Python", "Data Science"))

age = 20
name = "Ali"
message = f"Hello, My Name is {name} and My Age is {age}"
print(message)

price = 50
item = "Apple"
txt = "The price is {} and the price is {} dollars"
print(txt.format(item, price))

# Escape Character
txt = "The \'Apple\' is Red in Color"
print(txt)