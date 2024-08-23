from math import *
def isPrime(n) :
    if n < 2 :
        return False
    for i in range(2, int(sqrt(n) + 1)) :
        if n % i == 0 :
            return False
    return True
t = int(input())
for i in range(t):
    s = input()
    n = len(s)
    sum = 0
    for j in range(n):
       sum += int(s[j])

    if isPrime(sum):
        print("YES")
    else:
        print("NO")