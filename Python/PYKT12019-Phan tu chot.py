t = int(input())
for _ in range(t):
    n = int(input())
    a = [0] * (n + 2)
    tmp = list(map(int, input().split()))
    for i in range(1, n + 1):
        a[i] = tmp[i - 1]
    res = 0
    left = [0] * (n + 2)
    right = [0] * (n + 2)
    right[n + 1] = 10**18
    for i in range(1, n + 1):
        left[i] = max(left[i - 1], a[i])
    for i in range(n, 0, -1):
        right[i] = min(right[i + 1], a[i])
    for i in range(1, n + 1):
        if left[i] <= a[i] < right[i + 1]: 
            res += 1
    print(res)