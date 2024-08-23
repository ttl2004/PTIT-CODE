t = int(input())
for i in range(t):
    n = int(input())
    sum = 0
    if n % 2 == 1:
        for j in range(1, n + 1, 2):
            sum += float(1/ j)
    else:
        for j in range(2, n + 1, 2):
            sum += float(1/ j)
    print("{:.6f}".format(sum))