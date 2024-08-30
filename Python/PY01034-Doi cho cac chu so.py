
t = int(input())
for _ in range(t):
    s = input()
    __len = len(s)
    i, j = __len - 2, __len - 1
    while i >= 0 and s[i] <= s[i + 1]: i -= 1
    if i < 0: print(-1)
    else:
        while s[j] >= s[i]: j -= 1
        while s[j] == s[j - 1]: j -= 1
        tmp = list(s)
        tmp[i], tmp[j] = tmp[j], tmp[i]
        s = "".join(tmp)
        if s[0] == '0': print(-1)
        else:
            print(s)