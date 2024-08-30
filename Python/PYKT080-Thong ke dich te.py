m, n = map(int, input().split())
ans = 0
a = [[0]] * n
qe = []
oxy = [[-1,-1],[-1,0],[-1,1],[0,-1],[0,1],[1,-1],[1,0],[1,1]]

for i in range(n):
    a[i] = list(map(int, input().split()))
    for j  in range(m):
        if a[i][j] == -1:
            qe.append([i, j])
while len(qe) > 0:
    u = qe[0]
    qe.pop(0)
    for i in oxy:
        x, y = u[0] + i[0], u[1] + i[1]
        if 0 <= x < n and 0 <= y < m:
            if a[x][y] != 0:
                ans += a[x][y]
                a[x][y] = 0
        

print(ans)
