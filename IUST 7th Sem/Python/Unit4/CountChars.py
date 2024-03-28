def Count_Chars(s):
    count = 0
    for i in s:
        count += 1
    return count

s = input("Enter a string: ")
print ("Number of characters in the string are: ", Count_Chars(s))