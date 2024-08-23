t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    m = n // 2
    mp = {}
    for j in range(n):
        if a[j] in mp:
            mp[a[j]] += 1
        else:
            mp[a[j]] = 1
    ans = []
    for key in mp:
        if mp[key] > m:
            ans.append(key)
    if len(ans) == 0: print("NO")
    else: print(ans[0])