def check(s):
    if len(s) % 2 == 1 or s != s[::-1]:
        return False
    for i in s:
        if int(i) % 2 == 1:
            return False
    return True
t = int(input())
for i in range(t):
    n = int(input())
    for j in range(22, n, 2):
        if check(str(j)):
            print(j, end = " ")
    print()