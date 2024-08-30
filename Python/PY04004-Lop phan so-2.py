from math import *
a, b, c, d = map(int, input().split())
e = a * d  + c * b
f = b * d
k = gcd(e, f)
e = e // k
f = f // k
print(str(e) + "/" + str(f))