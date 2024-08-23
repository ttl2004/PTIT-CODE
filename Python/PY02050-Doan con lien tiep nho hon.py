t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    stk = []
    for j in range(n):
        while len(stk) != 0 and a[stk[-1]] <= a[j]:
            stk.pop()
        if len(stk) == 0: print(j + 1, end = " ")
        else: print(j - stk[-1], end = " ")
        stk.append(j)
    print()