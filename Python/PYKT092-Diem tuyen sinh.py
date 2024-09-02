class SinhVien:
    def __init__(self, id, name, diem, type):
        self.id = id
        self.name = name
        self.diem = diem
        self.type = type
    
def xuly(s):
    a = s.split()
    res = ""
    cnt = 0
    for i in a:
        cnt += 1
        i = i[0].upper() + i[1:].lower()
        res += i
        if  cnt != len(a): res += " "
    return res

def check(DanToc, KhuVuc):
    sum = 0
    if  DanToc != "Kinh": sum += 1.5
    if KhuVuc == '1': sum += 1.5
    elif KhuVuc == '2': sum += 1
    return sum

def check_1(diem):
    if diem < 20.5: return "Truot"
    else: return "Do"

t = int(input())
ans = []
for idx in range(1, t + 1):
    id = "TS"
    if idx < 10:
        id += "0"
    id += str(idx)
    name = input()
    diemThi = float(input())
    Dantoc = input()
    KhuVuc = input()
    TongDiem = diemThi + check(Dantoc, KhuVuc)
    ans.append(SinhVien(id, xuly(name), TongDiem, check_1(TongDiem)))

ans.sort(key = lambda x : (-x.diem, x.id))
for i in ans: print(i.id, i.name, "{:.1f}".format(i.diem), i.type)