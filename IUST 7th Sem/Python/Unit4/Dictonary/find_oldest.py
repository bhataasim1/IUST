# persons = {
#     "John": 25,
#     "Ali": 30,
#     "Sara": 22,
#     "Mina": 27,
#     "Asghar": 35
# }

# oldest = max(persons, key=persons.get)
# print(f"The oldest person is {oldest} and his/her age is {persons[oldest]}")

persons = {
    "john": {
        "age": 25,
        "height": 180,
        "weight": 75
    },
    "ali": {
        "age": 30,
        "height": 175,
        "weight": 80
    },
    "sara": {
        "age": 22,
        "height": 160,
        "weight": 50
    },
}

oldest = max(persons, key=lambda x: persons[x]["age"])
print(oldest)
print(f"The oldest person is {oldest} and his/her age is {persons[oldest]['age']}")