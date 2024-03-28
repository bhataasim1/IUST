def reverse_string(s):
    rev = ""
    for i in s:
        rev = i + rev
    return rev

s = input("Enter a string: ")
print("Reversed string is: ", reverse_string(s))