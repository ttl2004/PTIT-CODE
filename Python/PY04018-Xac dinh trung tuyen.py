class GiaoVien:
    def __init__(self, id, name, mon, mark, type):
        self.id = id
        self.name = name
        self.mon = mon
        self.mark = mark
        self.type = type
def check(c):
    if  c == '1': return 2.0
    if  c == '2': return 1.5
    if  c == '3': return 1.0
    if  c == '4': return 0.0

def xuly(s, mark1, mark2):
    return mark1 * 2 + mark2 + check(s[1])

def ktra(mark):
    if mark >= 18: return "TRUNG TUYEN"
    else: return "LOAI"

def check_2(c):
    if c == 'A': return "TOAN"
    if c == 'B': return "LY"
    if c == 'C': return "HOA"

t = int(input())
ans = []
for i in range(1, t + 1):
    name = input()
    s = input()
    mark1 = float(input())
    mark2 = float(input())
    mark = xuly(s, mark1, mark2)
    id = "GV"
    if i < 10:
        id += "0"
    id += str(i)
    ans.append(GiaoVien(id, name, check_2(s[0]),mark, ktra(mark)))

ans.sort(key = lambda x: x.mark, reverse = True)

for i in ans:
    print(i.id, i.name, i.mon, "{:.1f}".format(i.mark), i.type)