ans = []
def Try(s, n, a, b, c):
    if len(s) == n and c / (a + b + c) > 0.5 and c > 0:
        if int(s) not in ans: ans.append(int(s))
    if len(s) < n:
        Try(s + '0', n, a + 1, b, c)
        Try(s + '1', n, a, b + 1, c)
        Try(s + '2', n, a, b, c + 1)

def sang():
    for i in range(1, 10):
        Try("", i, 0, 0, 0)
        
t = int(input())
sang()
for i in range(t):
    b = int(input())
    a = ans[0: b]
    print(*a)