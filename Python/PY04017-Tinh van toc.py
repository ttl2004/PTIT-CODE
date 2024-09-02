class TayDua: 
    def __init__(self, id, name, donVi, vanToc, time):
        self.id = id
        self.name = name
        self.donVi = donVi
        self.vanToc = vanToc
        self.time = time

def xuly(gio, phut):
    gio = gio - 6
    phut = phut / 60
    return gio + phut

def xuly_2(name, donVi):
    a1 = name.split()
    a2 = donVi.split()
    ans = ""
    for i in a2:
        ans += i[0]
    for i in a1:
        ans += i[0]
    return ans

t = int(input())
res = []
for i in range(t):
    name = input()
    donvi = input()
    time = input().split(":")
    res.append(TayDua(xuly_2(name, donvi), name, donvi, round(120 / xuly(int(time[0]), int(time[1]))), xuly(int(time[0]), int(time[1]))))

res.sort(key = lambda x: x.time)
for i in res:
    print(i.id, i.name, i.donVi, str(int(i.vanToc)) + " Km/h")


