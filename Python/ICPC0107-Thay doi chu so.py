from math import *
def change(c, d, x, y):
    z = x
    w = y
    z = z.replace(c, d)
    w = w.replace(c, d)
    return  int(z) + int(w)
t = int(input())
for i in range(t):
    a = list(map(str, input().split()))
    s = list(map(str, input().split()))
    x = 0
    y = 0
    if (len(s) == 1) :
        x = s[0]
        y = input()
    else:
        x = s[0]
        y = s[1]
    ans1 = change(a[0], a[1], x, y)
    ans2 = change(a[1], a[0], x, y)
    print((min(ans1, ans2)), (max(ans1, ans2)))