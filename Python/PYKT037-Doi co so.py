def chuyenDoi(N, b):
    digits = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    result = ''
    while N > 0:
        result = digits[N % b] + result
        N //= b

    return result


t = int(input())

for _ in range(t):
    N, b = map(int, input().split())
    print(chuyenDoi(N, b))
