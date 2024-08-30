t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = [[0] * m for _ in range(n)]  # Khởi tạo đúng kích thước ma trận ảnh
    b = [[0] * 3 for _ in range(3)]  # Khởi tạo đúng kích thước ma trận kernel
    s = 0

    for i in range(n):
        a[i] = [int(x) for x in input().split()]
    
    for i in range(3):
        b[i] = [int(x) for x in input().split()]

    total_sum = 0
    for i in range(1, n - 1):
        for j in range(1, m - 1):
            tmp = (a[i - 1][j - 1] * b[0][0] + a[i - 1][j] * b[0][1] + a[i - 1][j + 1] * b[0][2]
                   + a[i][j - 1] * b[1][0] + a[i][j] * b[1][1] + a[i][j + 1] * b[1][2]
                   + a[i + 1][j - 1] * b[2][0] + a[i + 1][j] * b[2][1] + a[i + 1][j + 1] * b[2][2])
            total_sum += tmp
    print(total_sum)
