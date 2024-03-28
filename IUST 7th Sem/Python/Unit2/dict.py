person = {
    "name": "John Doe",
    "age": 30,
}

person["age"] = 32
person["city"] = "Tehran"
person.update({"city": "Shiraz", "age": 33})
print(person)

val = person.values()
print(val)
key = person.keys()
print(key)

del person["city"]
print(person)

# del person
# print(person) #Error

person_copy = person.copy()
print(person_copy)

person_copy["name"] = "Jane"
print(person_copy)

del person_copy
# print(person_copy) #Error

person.clear()
print(person)

Family = {
    "child1": {
        "name": "Tom",
        "age": 7,
    },
    "child2": {
        "name": "Jane",
        "age": 10,
    },
    "Assets" : {
        "House": {
            "location": "Tehran",
            "price": 1000000
        },
        "Cars": {
            "Car1": {
                "model": "BMW",
                "year": 2018
            },
            "Car2": {
                "model": "Benz",
                "year": 2019
            },
            "car3": {
                "model": "Pride",
                "year": 2015
            }
        }
    }
}

# print(Family)
print(Family["Assets"]["House"]["price"])
# for key, value in Family.items():
#     print(key, value)