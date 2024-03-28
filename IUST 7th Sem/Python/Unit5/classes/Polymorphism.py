class Car:
    def __init__(self, name):
        self.name = name

    def move(self):
        print("Car is moving")

class Bote:
    def __init__(self, name):
        self.name = name

    def move(self):
        print("Bote is sailing")

class Plane:
    def __init__(self, name):
        self.name = name

    def move(self):
        print("Plane is flying")

c1 = Car("Toyota")
b1 = Bote("Speed Boat")
p1 = Plane("Boeing 747")

for i in (c1, b1, p1):
    i.move()