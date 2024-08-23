def check(n):
    sum = 0
    for i in range(len(n)):
        sum += int(n[i])
    for i in range(1, len(n)):
        if abs(ord(n[i]) - ord(n[i - 1])) != 2:
            return False
    return sum % 10 == 0
t = int(input())
for i in range(t):
    n = input()
    if check(n):
        print("YES")
    else:
        print("NO")