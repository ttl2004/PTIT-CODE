t = int(input())
for i in range(t):
    n, d = map(int, input().split())
    a = list(map(int, input().split()))
    for j in range (n):
        print(a[(j + d) % n], end = " ")
    print()