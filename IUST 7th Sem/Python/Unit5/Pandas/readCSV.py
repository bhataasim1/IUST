import pandas as pd
import matplotlib.pyplot as plt

# pd.options.display.max_rows = 100
# print(pd.options.display.max_rows)

usernames = pd.read_csv('customers-10000.csv')
print(usernames)

cust = pd.DataFrame(usernames)
print(cust)

readJson = pd.read_json('data.js')
print(readJson.to_string()) #prints the entire file (when use to_string())

rd = pd.DataFrame(readJson)
print(rd)

print(rd.head(10))
print(rd.tail(10))
newRd = rd.dropna()  #This will drop the NA rows
x = rd["Calories"].mean()
rd['Calories'].fillna(x, inplace=True)

print(rd.duplicated())

user = pd.DataFrame(usernames)
print(user.info())

print(rd.corr())

rd.plot()
rd.plot(kind='hist')
plt.show()