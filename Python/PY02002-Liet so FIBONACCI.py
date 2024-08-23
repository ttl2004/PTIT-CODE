fb = [0] * 93
def fibo():
    fb[0] = 0
    fb[1] = 1
    for i in range(2, 93):
        fb[i] = fb[i - 1] + fb[i - 2]

t = int(input())
fibo()
for i in range(t):
    a, b = map(int, input().split())
    arr = fb[a:b + 1]
    for j in arr:
        print(j, end = " ")
    print()