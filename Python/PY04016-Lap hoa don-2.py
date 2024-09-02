from datetime import datetime
class KhachHang:
    def __init__(self, id, name, phong, ngay, money):
        self.id = id
        self.name = name
        self.phong = phong
        self.ngay = ngay
        self.money = money

def check(s):
    if s[0] == '1': return 25
    if s[0] == '2': return 34
    if s[0] == '3': return 50
    if s[0] == '4': return 80

t = int(input())
ans = []
for i in range(1, t + 1):
    id = "KH"
    if i < 10:
        id += "0"
    id += str(i)
    name = input().strip()
    phong = input().strip()
    begin = input().strip()
    end = input().strip()
    DichVu = int(input())
    a = datetime.strptime(begin, "%d/%m/%Y")
    b = datetime.strptime(end, "%d/%m/%Y")
    c = (b - a).days  + 1
    money = check(phong) * c + DichVu
    ans.append(KhachHang(id, name, phong, c, money))

ans.sort(key = lambda x: x.money, reverse = True)
for i in ans:
    print(i.id, i.name, i.phong, i.ngay, i.money)
