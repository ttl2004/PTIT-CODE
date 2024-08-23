def SNT(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
tmp = []
for i in range(n):
    for j in range(m):
        f = a[i][j]
        if SNT(f):
            tmp.append(f)
if len(tmp) == 0:
    print("NOT FOUND")
else:
    _max = max(tmp)
    print(_max)
    for i in range(n):
        for j in range(m):
            if a[i][j] == _max:
                print("Vi tri [", end= '')
                print(str(i) + "]" + "[" + str(j) + "]")