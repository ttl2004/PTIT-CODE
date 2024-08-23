s = input()
if len(s) % 2 != 0: s = s[:len(s) - 1]
a = []
for i in range(0, len(s), 2):
    a.append(int(s[i:i + 2]))
a = set(a)
a = list(a)
a.sort()
for i in range(len(a)):
    print(a[i], end = " ")