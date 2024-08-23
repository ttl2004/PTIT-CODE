def isPrime(n):
    if n < 2:
        return 0
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return 0
    return 1

n = int(input())
a = list(map(int, input().split()))
ans = []
for  i in range(n):
    if isPrime(a[i]):
        ans.append(a[i])
ans.sort()
idx = 0
for i in range(n):
    if a[i] in ans:
        print(ans[idx], end = ' ')
        idx += 1
    else:
        print(a[i], end = ' ')