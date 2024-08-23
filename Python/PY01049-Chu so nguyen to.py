from math import *
def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True
def ktra(s):
    if isPrime(len(s)) == False:
        return False
    cnt1 = cnt2 = 0
    n = int(s)
    while n > 0:
        m = n % 10
        if  m != 2 and m != 3 and m != 5 and m != 7:
            cnt1 += 1
        else:
            cnt2 += 1
        n = n // 10
    if cnt1 >= cnt2:
        return False
    return True
t = int(input())
for i in range(t):
    s = input()
    if ktra(s) == True:
        print("YES")
    else:
        print("NO")

