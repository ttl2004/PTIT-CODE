t = int(input())
for _ in range(t):
    n = int(input())
    mp = {}
    for _ in range(n):
        x = int(input())
        if x in mp:
            mp[x] += 1
        else:
            mp[x] = 1
    max_count = 0
    k = 1001  
    for key in mp:
        if mp[key] > max_count:
            max_count = mp[key]
            k = key
        elif mp[key] == max_count and key < k:
            k = key

    print(k)
