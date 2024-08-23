N = int(input())
A = list(map(int, input().split()))
arr = set(A)
ans = N + 1  
for i in range(1, N + 1):
    if i not in arr:
        ans = i
        break
print(ans)
