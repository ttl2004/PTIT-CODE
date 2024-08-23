t = int(input())
for i in range(t):
    s = input()
    n = input()
    k = len(n)
    f = len(s)
    cnt = 0
    i = 0
    while i < f - k + 1:
        if s[i:i + k] == n:
            cnt += 1
            i = i + k
        else:
            i += 1
    print(cnt)