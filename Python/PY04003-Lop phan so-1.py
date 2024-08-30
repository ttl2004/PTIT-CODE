from math import *
a, b = map(int, input().split())
c = gcd(a, b)
a = a // c
b = b // c
print(str(a) + "/" + str(b)) 