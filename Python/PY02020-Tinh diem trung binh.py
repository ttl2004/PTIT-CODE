n = int(input())
a = list(map(float, input().split()))
a.sort()
mi = a[0]
ma = a[n - 1]
sum = 0.0
cnt = 0
for i in range(n):
    if a[i] > mi and a[i] < ma:
        sum += a[i]
        cnt += 1
print("{:.2f}".format(sum / cnt))