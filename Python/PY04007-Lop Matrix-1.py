
t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    arr = [[0] * m] * n
    for j in range(n):
        arr[j] = ([int(x) for x in input().split()])

    b = []
    for k in range(m):
        tmp = []
        for l in range(n):
            tmp.append(arr[l][k])
        b.append(tmp)
    for i in range(n):
        for j in range(n):
            s = 0
            for k in range(m):
                s += arr[i][k] * b[k][j]
            print(s, end = " ")
        print()
            

    