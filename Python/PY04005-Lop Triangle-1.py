from math import *
class point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def kcach(self, p):
        x1 = self.x - p.x
        y1 = self.y - p.y
        return sqrt(x1 * x1 + y1 * y1)
class Triangle:
    def __init__(self, p1, p2, p3):
        self.p1 = p1
        self.p2 = p2
        self.p3 = p3
    def xuly(self):
        a = self.p1.kcach(self.p2)
        b = self.p2.kcach(self.p3)
        c = self.p3.kcach(self.p1)
        if (max(a, b, c) * 2 >= a + b + c):
            print("INVALID")
        else:
            print("{:.3f}".format(a + b + c))

a = []
t = int(input())
for x in range(t):
    a += [float(i) for i in input().split()]
    
i = 0
for index in range(t):
    triagle = Triangle(point(a[i], a[i+1]), point(a[i+2], a[i+3]), point(a[i+4], a[i+5]))
    triagle.xuly()
    i += 6