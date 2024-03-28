class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def display(self):
        print(f"Name: {self.name}, Age: {self.age}")

class Student (Person):
    def __init__(self, name, age, studentID):
        super().__init__(name, age)
        self.studentID = studentID

    def display(self):
        Person.display()        #we can also use super().display()
        print(f"Student ID: {self.studentID}")


p1 = Person("Ali", 20)
p1.display()

s1 = Student("Ahmad", 22, 1234)
s1.display()