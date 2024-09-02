
class ThongTin:
    time = 0
    SoLuong = 0
    def __init__(self, id, name, begin, end, Luong):
        self.id = id
        self.name = name
        self.time += end[0] * 60 + end[1] - (begin[0] * 60 + begin[1])
        self.SoLuong += Luong
    

t = int(input())
res = []
mp = {}
for i in range(1, t + 1):
    id = "T"
    if i < 10:
        id += "0"
    id += str(i)
    name = input()
    begin = [int(x) for x in input().split(":")]
    end = [int(x) for x in input().split(":")]
    Luong = int(input())
    if  name not in mp:
        res.append(ThongTin(id, name, begin, end, Luong))
        mp[name] = res[-1]
    else:
        mp[name].time += end[0] * 60 + end[1] - (begin[0] * 60 + begin[1])
        mp[name].SoLuong += Luong
    
for  i in res:
    avg = i.SoLuong / (i.time / 60)
    print(i.id, i.name, "{:.2f}".format(avg))
