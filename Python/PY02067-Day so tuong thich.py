n = int(input())
a = list(map(int, input().split()))
a.sort()
dd = [[0 for i in range(2005)] for j in range(2005)]
for i in range(1, 2001):
    dd[i][0] = i + 1
    for  j in range(1, i + 1):
        x = i // j
        if dd[i][x] == 0:
            dd[i][x] = j

_min = a[0]
ans = 1e9
for i in range (_min + 1):
    check = True
    sum = 0
    for  j in range (n):
        sum += dd[a[j]][i]
        if dd[a[j]][i] == 0:
            check = False
            break

    if check and sum < ans:
        ans = sum

print(ans)