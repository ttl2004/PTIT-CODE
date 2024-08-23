n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
_max = 0
_min = 1e9
for i in range(n):
    _max = max(_max, max(a[i]))
    _min = min(_min, min(a[i]))
k = _max - _min
tmp = []
for i in range(n):
    for j in range(m):
        if a[i][j] == k:
            tmp.append(a[i][j])
            break
if len(tmp) == 0:
    print("NOT FOUND")
else:
    print(k)
    for i in range(n):
        for j in range(m):
            if a[i][j] == k:
                print("Vi tri [", end= '')
                print(str(i) + "]" + "[" + str(j) + "]")