file = open("example.txt", "w")
file.write("Hello, world!")
file.close()


name = ["Ali", "Reza", "Mehdi"]
with open("example.txt", "w") as file:
    for i in name:
        file.write(i + "\n")
    file.close()

with open("example.txt", "r") as file:
    names_list = file.readlines()
    for i in names_list:
        print(i)
    file.close()