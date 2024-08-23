while True:
    n = int(input())
    if n == 0:
        break
    count = 1
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        count += 1
    print(count)