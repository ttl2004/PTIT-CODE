class MonHoc:
    def __init__(self, id, name, HinhThuc):
        self.id = id
        self.name = name
        self.HinhThuc = HinhThuc
    
    def __out__(self):
        print(self.id, self.name, self.HinhThuc)

t = int(input())
a = []
for i in range(t):
    id = input()
    name = input()
    HinhThuc = input()
    a.append(MonHoc(id, name, HinhThuc))

a = sorted(a, key = lambda x: x.id)
for i in a:
    i.__out__()
