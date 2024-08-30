def rounds(n) :
    return 1 if n >= 5 else 0
t = int(input())
for p in range(t):
    tmp = int(input())
    a = [int (x) for x in str(tmp)]

    for i in range(len(a) - 1, 0, - 1):
        a[i - 1] += rounds(a[i])
        a[i] = 0
    for i in a:
        print(i, end = "")
    print()