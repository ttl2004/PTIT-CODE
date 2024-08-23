t = int(input())
for i in range(t):
    n = int(input())
    cnt = 0
    check = 0
    while cnt <= 1000:
        if n % 7 == 0:
            check = 1
            break
        m = int(str(n)[::-1])
        n += m
        cnt += 1
        

    if check == 1:
        print(n)
    else:
        print(-1)