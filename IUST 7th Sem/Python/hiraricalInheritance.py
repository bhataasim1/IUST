class Animal:
    def __init__(self, name, speak):
        self.name = name
        self.speak = speak

    def Voice(self):
        pass

class Dog(Animal):
    def __init__(self, name, speak):
        super().__init__(name, speak)

    def Voice(self):
        print(f"{self.name} speaks {self.speak}")

class Cat(Animal):
    def __init__(self, name, speak):
        super().__init__(name, speak)

    def Voice(self):
        print(f"{self.name} speaks {self.speak}")


c = Cat("Billi", 'Meow')
c.Voice()

d = Dog("Kutta", 'Woow')
d.Voice()