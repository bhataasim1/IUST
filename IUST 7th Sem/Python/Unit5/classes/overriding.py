class Point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def Add(self, other):
        return Point(self.x + other.x, self.y + other.y)
    
    def __str__(self):
        return f"({self.x}, {self.y})"
    
p1 = Point(1, 2)
p2 = Point(3, 4)
print(p1.Add(p2))