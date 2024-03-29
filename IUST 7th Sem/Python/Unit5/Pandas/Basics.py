import pandas as pd

data = [1, 2, 5 , 6, 7]
a = pd.Series(data)
print(a) # with indexes 0 1, 1 2
print(data) # without indexes [1, 2, 5, 6, 7]

b = pd.Series(data, index=['a', 'b', 'c', 'd', 'e'])
print(b) # with indexes a 1, b 2
print(b['c'])

# Key Value Pairs
person = {
    "name": "Aasim",
    "Roll": 63
}
print(pd.Series(person)) #Keys become Labels
print(person['name'])

p = pd.Series(person, index=["name"]) #this will print only the label name with Value
print(p)


calouries = {
    "day1": [1,4, 5, 6],
    "day2": [9, 2, 1, 5]
}

print(pd.DataFrame(calouries)) # this will print in the Table Form

p = pd.DataFrame(calouries)
print(p)
print(p.loc[1])