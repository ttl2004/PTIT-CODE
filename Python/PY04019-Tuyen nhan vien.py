def check(mark):
    if mark > 9.5: return "XUAT SAC"
    elif mark >= 8: return "DAT"
    elif mark >= 5: return "CAN NHAC"
    else: return "TRUOT"

def xuly(a):
    if  a > 10: 
        a = a / 10
    return a
    

class NhanVien:
    def __init__(self, id, name, mark, type):
        self.id = id
        self.name = name
        self.mark = mark
        self.type = type


if __name__ == "__main__":
    t = int(input())
    a = []
    for f in range(1, t  + 1):
        name = input()
        mark1 = float(input())
        mark2 = float(input())
        mark1 = xuly(mark1)
        mark2 = xuly(mark2)
        markTB = (mark1 + mark2) / 2
        a.append(NhanVien("TS0" + str(f), name, markTB, check(markTB)))

    a = sorted(a, key = lambda x: -x.mark)
    for i in a:
        print(i.id, i.name, "{:.2f}".format(i.mark), i.type)