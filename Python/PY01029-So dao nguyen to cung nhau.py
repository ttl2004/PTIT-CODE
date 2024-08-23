from math import *
t = int(input())
for i in range(t):
    n = int(input())
    m = int(str(n)[::-1])
    if gcd(n, m) == 1:
        print("YES")
    else:
        print("NO")