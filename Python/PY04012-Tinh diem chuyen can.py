class SinhVien:
    def __init__(self, msv, name, IdClass, mark, type):
        self.msv = msv
        self.name = name
        self.IdClass = IdClass
        self.mark = mark
        self.type = type
def xuly(s):
    cnt2 = cnt3 = 0
    for i in s:
        if i == 'm':
            cnt2 += 1
        elif i == 'v':
            cnt3 += 1
    diem = 10 - cnt2 * 1 - cnt3 * 2
    if diem < 0:
        diem = 0
    return diem

t = int(input())
res = []
mp = {}
for i in range(t):
    msv = input()
    name = input()
    IdClass = input()
    res.append(SinhVien(msv, name, IdClass, 0, "null"))
    if msv not in mp:
        mp[msv] = res[-1]
    
for i in range(t):
    msv, s = input().split()
    mark = xuly(s)
    mp[msv].mark += mark
    if mark == 0:
        mp[msv].type = "KDDK"

for i in res:
    if i.type != "null": print(i.msv, i.name, i.IdClass, i.mark, i.type)
    else : print(i.msv, i.name, i.IdClass, i.mark)