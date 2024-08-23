n = int(input())
stk = []
a = list(map(int, input().split()))
for i in range(n):
    stk.append(a[i])
    if len(stk) > 1 and (stk[-1] + stk[-2]) % 2 == 0:
        stk.pop()
        stk.pop()

print(len(stk))