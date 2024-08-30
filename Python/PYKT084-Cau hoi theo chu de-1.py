t = int(input())
a = []

for i in range(t):
    s = input()
    a.append(s)
    if s == '':
        print(a[0] + ":", len(a) - 2)
        a.clear()

print(a[0] + ":", len(a) - 1)