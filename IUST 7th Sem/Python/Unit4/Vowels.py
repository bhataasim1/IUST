def check_Vowels(s):
    count = 0
    # vowels = set("aeiouAEIOU")
    vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
    for i in s:
        if i in vowels:
            count += 1
    return count

s = input("Enter a string: ")
print ("Number of vowels in the string are: ", check_Vowels(s))