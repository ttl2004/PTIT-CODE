from sys import stdin
from collections import deque

input = stdin.readline
a = [[]] * 1000
t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    for i in range(n): a[i] = list(map(int, input().split()))
    qe = deque()
    res = [[0] * m for _ in range(n)]
    qe.append((0, 0))
    while len(qe) > 0:
        x, y = qe.popleft()
        if x < n - 1:
            a1 = abs( a[x + 1][y] - a[x][y])
            if x + a1 < n and a1 and res[x + a1][y] == 0:
                res[x + a1][y] = res[x][y] + 1
                qe.append((x + a1, y))
        if y  < m - 1:
            a2 = abs(a[x][y + 1] - a[x][y])
            if y + a2 < m and a2 and res[x][y + a2] == 0:
                res[x][y + a2] = 1 + res[x][y]
                qe.append((x, y + a2))
        if x < n - 1 and y  < m - 1:
            a3 = abs(a[x + 1][y + 1] - a[x][y])
            if x + a3 < n and y + a3 < m and a3 and res[x + a3][y + a3] == 0:
                res[x + a3][y + a3] = 1 + res[x][y]
                qe.append((x + a3, y + a3))

    if res[n - 1][m - 1]:
        print(res[n - 1][m - 1])
    else:
        print(-1)