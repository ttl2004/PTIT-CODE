t = int(input())
for i in range(t):
    n, x, m = map(float, input().split())
    cnt = 0
    while n < m:
        n += n * x / 100
        cnt += 1
    print(cnt)