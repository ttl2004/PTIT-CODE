def check(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

t = int(input())
for i in range(t):
    s = input()
    n = int(s[-3:])
    m = int(s[:3:])
    if check(n) and check(m):
        print("YES")
    else:
        print("NO")