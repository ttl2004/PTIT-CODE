import bisect
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
n = int(input())
a = list(map(int, input().split()))
cnt = 0
for i in a:
    if check[i] != 0:
        ub = bisect.bisect_right(nt, i)
        cnt = max(cnt, min(abs(i - nt[ub - 1]), abs(i - nt[ub])))
print(cnt)