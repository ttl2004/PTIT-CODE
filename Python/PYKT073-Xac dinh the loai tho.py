t = int(input())
a = []
k = []
cnt = 0
for _ in range(t):
    s = input().split()
    if len(a) == 0 and len(s) == 6 : k.append(1)
    a.append(s)
    if len(a) > 1 and len(s) == 6 and len(a[-2]) == 7 : k.append(1)
    if len(s) == 7 : cnt += 1
    if cnt == 4:
        k.append(2)
        cnt = 0

print(len(k))
for i in k:
    print(i)
    