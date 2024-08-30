n = int(input())
cnt = [0] * (n + 1)
for i in range(n - 1):
    a = list(map(int, input().split()))
    cnt[a[0]] += 1
    cnt[a[1]] += 1
f = 0
k = 0
for i in range(1, n + 1):
    if cnt[i] == n - 1 :
        f += 1
    elif cnt[i] == 1:
        k += 1
    else:
        print("No")
        break

if f == 1 and k == n - 1:
    print("Yes")    