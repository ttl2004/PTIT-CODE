from datetime import datetime
# f1 = open("E:\Code_Ptit\PyThon - codeptit\python - test\hello.txt", "r")
f1 = open("CATHI.in", "r")

class MonThi:
    def __init__(self, id, date, time, IdClass, hour, new_Date):
        self.id = id
        self.date = date
        self.time = time
        self.IdClass = IdClass
        self.hour = hour
        self.new_Date = new_Date

def xuly(time):
    s = time.split(":")
    return int(s[0]) + int(s[1])/60
t = int(f1.readline())
ans = []
for i in range(t):
    date = f1.readline().strip()
    time = f1.readline().strip()
    IdClass = f1.readline().strip()
    id = f"C{i+1:03}"
    tmp = datetime.strptime(date, "%d/%m/%Y")
    ans.append(MonThi(id, date, time, IdClass, xuly(time), tmp))

ans.sort(key = lambda x: (x.new_Date, x.hour,))

for i in ans:
    print(i.id, i.date, i.time, i.IdClass)