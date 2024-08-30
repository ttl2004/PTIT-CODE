class SoPhuc:
    def __init__(self, thuc, ao):
        self.thuc = thuc
        self.ao = ao
    
    def __add__(self, other):
        thuc = self.thuc + other.thuc
        ao = self.ao + other.ao
        return SoPhuc(thuc, ao)

    def __mul__(self, other):
        thuc = self.thuc * other.thuc - self.ao * other.ao
        ao = self.thuc * other.ao + self.ao * other.thuc
        return SoPhuc(thuc, ao)
    
    def __pow__(self):
        return self * self
    
    def __str__(self):
        if self.ao >= 0:
            return f"{self.thuc} + {self.ao}i"
        else:
            return f"{self.thuc} - {-self.ao}i"
        
t = int(input())
for _ in range(t):
    a, b, c, d = map(int, input().split())
    A = SoPhuc(a, b)
    B = SoPhuc(c, d)
    C = (A.__add__(B)).__mul__(A)
    D = (A.__add__(B)).__pow__()
    print(f"{C}, {D}")
