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
}

persons2 = {
    "sara": {
        "age": 22,
        "height": 160,
        "weight": 50
    },
    "ali": {
        "age": 5,
        "height": 175,
        "weight": 80
    },
}

for key in persons2:
    if key in persons:
        for k in persons2[key]:
            if k in persons[key]:
                persons[key][k] += persons2[key][k]
            else:
                persons[key][k] = persons2[key][k]
    else:
        persons[key] = persons2[key]
print(persons)