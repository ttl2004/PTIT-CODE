# f1 = open("E:\Code_Ptit\PyThon - codeptit\python - test\hello.txt", "r")
# f2 = open("E:\Code_Ptit\PyThon - codeptit\python - test\out.txt", "r")

f1 = open("DATA1.in", "r")
f2 = open("DATA2.in", "r")
a = []
b = []
for line in f1: 
    line = line.strip().lower()
    s = line.split()
    for i in s:
        a.append(i)

for line in f2: 
    line = line.strip().lower()
    s = line.split()
    for i in s:
        b.append(i)
a.sort()
b.sort()
x = set(a)
y = set(b)
z = sorted(x - y)
t = sorted(y - x)
print(*(z))
print(*(t))
