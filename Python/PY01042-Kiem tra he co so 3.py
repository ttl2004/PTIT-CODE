t = int(input())
for i in range(t):
    n = input()
    check = 1
    for j  in range (len(n)):
        if n[j] != '0' and n[j] != '1' and n[j] != '2':
            check = 0
            break
    if check == 1:
        print("YES")
    else:
        print("NO")