from math import *
t = int(input())
for i in range(t):
    n = int(input())
    print (1, end = " * ")
    for j in range(2, int(sqrt(n))):
        if n % j == 0:
            cnt = 0
            while n % j == 0:
                cnt += 1
                n //= j
            print(j, end = "^")
            print(cnt, end = "")
            if (n > 1):
                print(" * ", end = "")
            
    if n > 1:
        print(n, end = "^1")
    print()