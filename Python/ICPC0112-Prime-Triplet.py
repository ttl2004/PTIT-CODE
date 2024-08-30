from math import *
check = [0] * 1000005
def sang():
    check[0] = check[1] = 1
    for i in range(2, int(sqrt(1000000)) + 1):
        if check[i] == 0:
            for j in range(i * i, 1000005, i):
                check[j] = 1    

sang()
t = int(input())
for _ in range(t):
    n = int(input())
    cnt = 0
    for  i in range(6, n + 1):
        if check[i] == 0 and check[i - 6] == 0 and (check[i - 2] == 0 or check[i - 4] == 0):
            cnt += 1
    print(cnt)