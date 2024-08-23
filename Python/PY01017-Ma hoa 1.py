t = int(input())
for test in range(t):
    s = input()
    s += "@"
    cnt = 1
    for i in range(0, len(s) - 1):
        # print(s[i], end = ",")
        if s[i] == s[i + 1]:
            cnt += 1
        else:
            print(cnt, end = "")
            print(s[i], end = "")
            cnt = 1
    print()