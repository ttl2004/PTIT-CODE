def ktra(n):
    s = str(n)
    if len(s) < 2: return False 
    for i in range(len(s)//2):
        if s[i] != s[len(s) - 1 - i]:
            return False
    return True

n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
tmp = []
for i in range(n):
    for j in range(m):
        f = a[i][j]
        if ktra(f):
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