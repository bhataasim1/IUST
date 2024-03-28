def Check_Palindrome(s):
    rev = ""
    for i in s:
        rev = i + rev
    if s == rev:
        return True
    else:
        return False
    
s = input("Enter a string: ")
if Check_Palindrome(s):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")