t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    _min = min(a)
    _max = max(a)
    mp = {}
    cnt = 0
    for i in a:
        if i not in mp:
            mp[i] = 1
        else:
            mp[i] += 1
    for i in range(_min, _max + 1):
        if i not in mp:
            cnt += 1
    print(cnt)
