n = int(input())
a = [list (map(int, input().split())) for i in range(n)]
k = int(input())
sum1 = sum2 = 0

for i in range(n):
    for j in range(n):
        if i > j:
            sum1 += a[i][j]
        elif i < j:
            sum2 += a[i][j]

if abs(sum1 - sum2) <= k:
    print("YES")
else:
    print("NO")
print(abs(sum1 - sum2))