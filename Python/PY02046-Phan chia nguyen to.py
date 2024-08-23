def isPrime(n):
    if n < 2:
        return 0
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return 0
    return 1

n = int(input())
a = list(map(int, input().split()))
mp = {}
for i in a:
    if i in mp:
        mp[i] += 1
    else:
        mp[i] = 1
b = []
b.append(-1)
for i in a:
    if mp[i] > 0:
        b.append(i)
        mp[i] = 0
m = len(b)
dp = [0] * (m + 1)
for i in range(1, m):
    dp[i] = dp[i - 1] + b[i]
check = 0
for i in range(1, m):
    if isPrime(dp[i] - dp[0]) and isPrime(dp[m-1] - dp[i]):
        check = 1
        print(i - 1)
        break
if check == 0: print("NOT FOUND")