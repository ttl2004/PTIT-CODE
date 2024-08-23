from math import *
def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True

t = int(input())

for i in range(t):
    a = list(map(int, input().split()))
    n = a[0]
    m = a[1]
    k = gcd(n, m)
    sum = 0
    while k > 0:
        sum = sum + (k % 10)
        k = k // 10
    
    if isPrime(sum):
        print("YES")
    else:
        print("NO")