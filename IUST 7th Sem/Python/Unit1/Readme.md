# Introduction to Python
Python is an Interpreted, high level, object oriented langauage.It is a general purpose language which is used for web development, data science and AI etc. It was created by Guido van Rossum and was released in 1991. It is a dynamically Typed language.

# Features of Python
1. Easy to learn
2. Free and Open Source
3. High Level Language
4. Portable
5. Object Oriented
6. Interpreted
7. Extensible

# Applications of Python
1. Web Development
2. Data Science
3. Machine Learning
4. Artificial Intelligence
5. Automation

# Python Variables
Variables are used to store data values. A variable is created the moment you first assign a value to it using the assignment operator `=`.
```python
x = 5
y = "Hello, World!"
```

# Python Data Types
1. Text Type: `str`
    ```python
    x = "Hello, World!"
    ```
2. Numeric Types: `int`, `float`, `complex`
    ```python
    x = 5
    y = 3.14
    z = 1j
    ```
3. Sequence Types: `list`, `tuple`, `range`
    ```python
    x = ["apple", "banana", "cherry"]
    y = ("apple", "banana", "cherry")
    z = range(6)
    ```
4. Mapping Type: `dict`
    ```python
    x = {"name" : "John", "age" : 36}
    ```
5. Set Types: `set`, `frozenset`
    ```python
    x = {"apple", "banana", "cherry"}
    y = frozenset({"apple", "banana", "cherry"})
    ```
6. Boolean Type: `bool`
    ```python
    x = True
    y = False
    ```
7. Binary Types: `bytes`, `bytearray`, `memoryview`
    ```python
    x = b"Hello"
    y = bytearray(5)
    z = memoryview(bytes(5))
    ```

# Python Operators
1. Arithmetic Operators
    ```python
    x = 5
    y = 3
    print(x + y) # 8
    print(x - y) # 2
    print(x * y) # 15
    print(x / y) # 1.6666666666666667
    print(x % y) # 2
    print(x ** y) # 125
    print(x // y) # 1
    ```
2. Assignment Operators
    ```python
    x = 5
    x += 3
    x -= 3
    x *= 3
    x /= 3
    x %= 3
    x **= 3
    x //= 3
    ```
3. Comparison Operators
    ```python
    x = 5
    y = 3
    print(x == y) # False
    print(x != y) # True
    print(x > y) # True
    print(x < y) # False
    print(x >= y) # True
    print(x <= y) # False
    ```
4. Logical Operators
    ```python
    x = 5
    print(x > 3 and x < 10) # True
    print(x > 3 or x < 4) # True
    print(not(x > 3 and x < 10)) # False
    ```
5. Identity Operators
    ```python
    x = ["apple", "banana"]
    y = ["apple", "banana"]
    z = x
    print(x is z) # True
    print(x is y) # False
    print(x == y) # True
    print(x is not z) # False
    print(x is not y) # True
    ```
6. Membership Operators
    ```python
    x = ["apple", "banana"]
    print("banana" in x) # True
    print("pineapple" not in x) # True
    ```
7. Bitwise Operators
    ```python
    x = 5
    y = 3
    print(x & y) # 1
    print(x | y) # 7
    print(x ^ y) # 6
    print(~x) # -6
    print(x << 2) # 20
    print(x >> 2) # 1
    ```

# Python Blocks
Python uses Indentation to define blocks of code. Blocks are group of statements that are executed together. Proper indentation is compulsory in python as it defines the beginning and end of blocks eg loops, conditional statements and functions etc.
    ```python
    x = 5
    if x > 3:
        print("x is greater than 3")
    else:
        print("x is less than 3")
    ```
    OR
    ```python
    x = 5
    for i in range(x):
        print(i)
    ```
    OR
    ```python
    def myFunction():
        print("Hello, World!")
    myFunction()
    ```


# List
Lists are ordered collection of items. Lists are mutable which means that we can change the items in a list. Lists are defined by square brackets `[]`.
```python
thislist = ["apple", "banana", "cherry"]
print(thislist)
```

# Tuple
Tuples are ordered collection of items. Tuples are immutable which means that we cannot change the items in a tuple. Tuples are defined by round brackets `()`.
```python
thistuple = ("apple", "banana", "cherry")
print(thistuple)
```