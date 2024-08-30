n = int(input())
a = list(map(int, input().split()))
ans = 10**18
so = 0
for i in range(n):
    p = a[i]
    cnt = 0
    for j in a:
        if j != p:
            cnt += abs(j - p)
    if  cnt < ans:
        so = p
        ans = cnt
print(ans, so)