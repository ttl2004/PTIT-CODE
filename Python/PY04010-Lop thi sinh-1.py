class SinhVien:
    def __init__ (self, name, date, mark1, mark2, mark3):
        self.name = name
        self.date = date
        self.mark1 = mark1
        self.mark2 = mark2
        self.mark3 = mark3

    def TongDiem(self):
        return self.mark1 + self.mark2 + self.mark3
    
    def xuly(self):
        s = self.date.split("/")
        if len(s[0]) == 1:
            s[0] = "0" + s[0]
        if len(s[1]) == 1:
            s[1] = "0" + s[1]
        self.date = s[0] + "/" + s[1] + "/" + s[2]
        print(self.name, self.date, "{:.1f}".format(self.TongDiem()))

name = input()
date = input()
mark1 = float(input())
mark2 = float(input())
mark3 = float(input())
sv = SinhVien(name, date, mark1, mark2, mark3)
sv.xuly()