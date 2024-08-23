from math import *
def checkPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False        

    return True


t = int(input())
for test in range(t):
    n = int(input())
    count = 0
    i = 1
    while i < n:
        if (gcd(i, n) == 1):
            count += 1
        i += 1
    if checkPrime(count):
        print("YES")
    else:
        print("NO")