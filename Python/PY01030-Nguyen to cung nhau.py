from math import *
n, k = map(int, input().split())
st = 10**(k - 1)
en = 10**k
cnt = 0

for i in range(st, en):
    if gcd(n, i) == 1:
        cnt += 1
        print(i, end = " ")
    if cnt == 10:
        print()
        cnt = 0
