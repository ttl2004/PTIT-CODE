def checkPrime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

n = int(input())
a = list(map(int, input().split()))
b = []
for i in a:
    if checkPrime(i):
        b.append(i)
mp = {}
for i in b:
    if i in mp:
        mp[i] += 1
    else:
        mp[i] = 1
for i in mp:
    if mp[i] > 0:
        print (i, mp[i])
        mp[i] = 0