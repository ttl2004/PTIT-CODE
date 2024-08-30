def dfx(x, kt, adj):
    kt[x] = 1
    for i in adj[x]:
        if kt[i] == 0:
            dfx(i, kt, adj)

n, m, x = map(int, input().split())
kt = [0] * (n + 1)
adj = [[] for i in range(n + 5)]

for i in range(m):
    a, b = map(int, input().split())
    adj[a].append(b)
    adj[b].append(a)

dfx(x, kt, adj)

for i in range(1, n + 1):
    if kt[i] == 0:
        print(i)