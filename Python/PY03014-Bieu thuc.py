t = int(input())
for i in range(t):
    s = input()
    cnt = 0
    a = []
    for j in range(len(s)):
        if s[j] == '(' :
            cnt += 1
            print(cnt, end = " ")
            a.append(cnt)
        elif s[j] == ')' :
            print(a.pop(), end = " ")
    print()