class KhachHang:
    def __init__(self, id, name, money_in, money_out, VAT, Total):
        self.id = id
        self.name = name
        self.money_in = money_in
        self.money_out = money_out
        self.VAT = VAT
        self.Total = Total

def ChuanHoa(name):
    s = name.split()
    res = ""
    for i in range(len(s)):
        res += s[i][0].upper() + s[i][1:].lower()
        if i != len(s) - 1:
            res += " "
    
    return res

def check(Type):
    if Type == "A":
        return 100
    elif Type == "B":
        return 500
    elif Type == "C":
        return 200
    
def ThueVAT(money_out):
    return money_out // 20

t = int(input())
res = []
for i in range(1, t + 1):
    id = "KH"
    if i < 10:
        id += "0"
    id += str(i)
    name = input().strip()
    c, begin, end = input().split()
    SoDien = int(end) - int(begin)
    Type = check(c)
    money_in, money_out, VAT, Total = 0, 0, 0, 0
    
    if c == "A":
        if SoDien < 100:
            money_in = SoDien * 450
        else:
            money_in = 100 * 450
            money_out = (SoDien - 100) * 1000
            VAT = ThueVAT(money_out)
        Total = money_in + money_out + VAT

    elif c == "B":
        if SoDien < 500:
            money_in = SoDien * 450
        else:
            money_in = 500 * 450
            money_out = (SoDien - 500) * 1000
            VAT = ThueVAT(money_out)
        Total = money_in + money_out + VAT
        
    elif c == "C":
        if SoDien < 200:
            money_in = SoDien * 450
        else:
            money_in = 200 * 450
            money_out = (SoDien - 200) * 1000
            VAT = ThueVAT(money_out)
        Total = money_in + money_out + VAT

    res.append(KhachHang(id, ChuanHoa(name), money_in, money_out, VAT, Total))

res.sort(key = lambda x: -x.Total)
for i in res:
    print(i.id, i.name, i.money_in, i.money_out, i.VAT, i.Total)