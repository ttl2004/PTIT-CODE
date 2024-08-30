while True:
    a = list(map (int, input().split()))
    if a[0] == 0 and a[1] == 0 and a[2] == 0 and a[3] == 0:
        break
    for i in range(0, 1000000):
        if a[0] == a[1] == a[2] == a[3]:
            print(i)
            break
        f = a[0]
        a[0] = abs(a[0] - a[1])
        a[1] = abs(a[1] - a[2])
        a[2] = abs(a[2] - a[3])
        a[3] = abs(a[3] - f)