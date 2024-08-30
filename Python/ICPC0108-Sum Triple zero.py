t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    cnt = 0
    for i in range(n - 2):
        x = a[i]
        l, r = i + 1, n - 1
        while l < r:
            if x + a[l] + a[r] > 0:
                r -= 1
            elif x + a[l] + a[r] < 0:
                l += 1
            else:
                cnt += 1
                l += 1
    
    print(cnt)