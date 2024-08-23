t = int(input())
for i in range(t):
    s = input()
    tmp = list(s)
    a = set(tmp)
    n = len(a)
    if (n > 2):
        print("NO")
    else:
        m = len(s)
        x = s[0]
        y = s[1]
        check = 1
        for j in range(2, m):
            if j % 2 == 0:
                if s[j] != x:   
                    check = 0
                    break
            else:
                if s[j] != y:
                    check = 0
                    break
        if check == 1:
            print("YES")
        else:
            print("NO")