s = input()
k = len(s) // 2
while len(s) > 1:
    tmp = int(s[k:]) + int(s[:k])
    s = str(tmp)
    k = len(s) // 2
    print(s)