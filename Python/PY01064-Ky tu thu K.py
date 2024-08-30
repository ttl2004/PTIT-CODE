t  = int(input())
for i in range(t):
    n, k = map(int, input().split())
    idx = 0
    while k % 2 == 0:
        idx += 1
        k = k // 2

    print(chr(65 + idx))