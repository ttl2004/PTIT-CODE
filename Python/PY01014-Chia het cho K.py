a, k, n = map(int, input().split())
if a == n:
    print(-1)
else:
    check = 0
    start = (a // k) + 1
    end = (n + a) // k
    for i in range(start, end + 1):
        b = k * i - a
        if a + b <= n:
            print(b, end = " ")
            check = 1

    if check == 0:
        print(-1)