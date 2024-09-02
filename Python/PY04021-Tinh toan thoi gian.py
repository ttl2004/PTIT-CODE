class KhachHang:
    time = 0
    def __init__(self, id, name, begin, end):
        self.id = id
        self.name = name
        self.time = end[0] * 60 + end[1] - (begin[0] * 60 + begin[1])
    

t = int(input())
res = []
for i in range(t):
    id = input()
    name = input()
    begin = [int(x) for x in input().split(":")]
    end = [int(x) for x in input().split(":")]
    res.append(KhachHang(id, name, begin, end))

res = sorted(res, key = lambda x: -x.time)

for i in res:
    print(i.id, i.name, int(i.time / 60), "gio", i.time % 60, "phut")