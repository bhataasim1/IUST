# with open('example.txt', 'w') as file:
#     file.write("Hello \nWorld")
#     file.close()

# Open a file
file_path = "example.txt"
file_object = open(file_path, "r")

# Read the entire contents of the file
data = file_object.read()
print("File contents:", data)

# Move the file pointer to the beginning
file_object.seek(0)

# Read the first 10 characters from the current position
partial_data = file_object.read(10)
print("First 10 characters:", partial_data)

# Get the current file pointer position
position = file_object.tell()
print("Current position:", position)

# Close the file
file_object.close()
