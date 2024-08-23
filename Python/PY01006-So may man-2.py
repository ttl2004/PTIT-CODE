t = int(input())

for i in range(t):
    str = input()
    check = 1;
    idx = 0
    while idx < len(str):
        if str[idx] != '4' and str[idx] != '7':
            check = 0
            break
        idx += 1 
    if check == 1:
        print("YES")
    else:
        print("NO")