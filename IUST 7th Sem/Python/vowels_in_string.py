user_input = str(input("Enter a string: "))
vowels = ['a', 'e', 'i', 'o', 'u']
count = 0
vowel_letter_in_string = ''

for i in user_input:
    if i in vowels:
        count += 1
        vowel_letter_in_string += i

print(count)
print(vowel_letter_in_string)