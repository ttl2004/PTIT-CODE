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
    m = int(s[-4:])
    if check(m):
        print("YES")
    else:
        print("NO")

