t = int(input())
for i in range(t):
    n = int(input())
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    s = str(sum)
    if s == s[::-1] and sum > 10:
        print("YES")
    else:
        print("NO")
