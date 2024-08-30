n, m = map(int, input().split())
a = [list(map(int, input().split())) for i in range(n)]
if n > m:
    N = n
    for i in range(n):
        if  N == m:
            for j in range(m):
                print(a[i][j], end = " ")
            print()
        elif i % 2 == 0:
            N -= 1
        else:
            for j in range(m):
                print(a[i][j], end = " ")
            print()
else:
    for i in range(n):
        M = m
        for j in range(m):
            if M == n:
                print(a[i][j], end = " ")
            elif j % 2 != 0:
                M -= 1
            else:
                print(a[i][j], end = " ")
        print()