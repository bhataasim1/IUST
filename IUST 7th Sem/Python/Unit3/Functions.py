# def Addition(a: int, b: int) -> int:
#     return a + b

# print(Addition(2, 3))

# def Subtraction(a: int, b: int) -> int:
#     return a - b

# print(Subtraction(2, 3))

def MultiplicationTable(num: int) -> int:
    for i in range(1, 11):
        print(num, "x", i, "=", num*i)

MultiplicationTable(5)


def GreetUsers(*users):
    for user in users:
        print("Hello", user)

GreetUsers("Ali", "Reza", "Mina", "Sara")

def GreetUsers2(**users):
    for key, value in users.items():
        print(key, ":", value)

GreetUsers2 (Ali = "Student", Reza = "Teacher", Mina = "Student", Sara = "Teacher")

def listOfArguments(user: list):
    for i in user:
        print(i)

listOfArguments(["Ali", "Reza", "Mina", "Sara"])

def Factorial(num: int) -> int:
    if num == 0:
        return 1
    else:
        return num * Factorial(num -1)
    
print(Factorial(5))

#Lambda Function

Add = lambda a, b: a + b
print(Add(2, 3))

import math
print(math.sqrt(16))
print(math.pi)

from myModules import Subtraction, Addition
print(Addition.Addition(2, 3))
print(Subtraction.Subtraction(2, 3))


import myModules
print(myModules.Subtraction.Subtraction(2, 3))
print(myModules.Addition.Addition(2, 3))


#Importing Package
import Package.Multiplication.Mul as Multi
print(Multi.Multiplication(2, 3))

import Package.Division.Div as Div
print(Div.Division(6, 3))