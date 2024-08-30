nt = []
check = [0] * 1000005
def sang():
    check[0] = check[1] = 0
    for i in range(2, int(1000000**0.5) + 1):
        if check[i] == 0:
            for j in range(i * i, 1000005, i):
                check[j] = 1
    for i in range(2, 1000005):
        if check[i] == 0:
            nt.append(i)
sang()
n, x = map(int, input().split())
idx = 0
print(x, end = " ")
for i in range(n):
    print(x + nt[idx], end = " ")
    x += nt[idx]
    idx += 1