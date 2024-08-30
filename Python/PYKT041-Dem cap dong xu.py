n = int(input())
a = [list(input()) for i in range(n)]
cot, hang = [0] * (n + 1), [0] * (n + 1)

for i in range(n):
    dem = 0
    for j in range(n):
        if a[i][j] == "C":
            dem += 1
            cot[j] += 1
    hang[i] = dem

res = 0
for i in range(n):
    res += (cot[i] * (cot[i] - 1)) // 2
    res += (hang[i] * (hang[i] - 1)) // 2
print(res)  
    
        