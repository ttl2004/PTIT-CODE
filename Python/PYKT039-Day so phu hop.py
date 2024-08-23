t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort()
    check = 1
    for j in range(n):
        if a[j] > b[j]:
            check = 0
            break
    if check == 1:
        print("YES")
    else:
        print("NO")

    
