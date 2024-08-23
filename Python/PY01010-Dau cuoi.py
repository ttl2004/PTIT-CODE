t = int(input())

for i in range(t):
    str = input()
    if str[0] == str[-2] and str[1] == str[-1]:
        print("YES")
    else:
        print("NO")