def xuly(arr):
    mp = {}
    for num in arr:
        if num in mp:
            mp[num] += 1
        else:
            mp[num] = 1
    for num, count in mp.items():
        if count % 2 != 0:
            return num

T = int(input().strip())
for _ in range(T):
    N = int(input().strip())
    arr = list(map(int, input().strip().split()))
    print(xuly(arr))
