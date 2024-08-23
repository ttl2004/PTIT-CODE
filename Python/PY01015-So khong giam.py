def check(str):
    for i in range(len(str)-1):
        if str[i] > str[i+1]:
            return False
    return True
t = int(input())
for i in range(t):
    str = input()
    if check(str):
        print("YES")
    else:
        print("NO")
    