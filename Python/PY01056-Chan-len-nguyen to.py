def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def check(s):
    sum = 0
    for i in range(len(s)):
        sum += int(s[i])
        if i % 2 == 0 and int(s[i]) % 2 != 0:
            return False
        if i % 2 != 0 and int(s[i]) % 2 == 0:
            return False
    if isPrime(sum) == False:
        return False
    return True
t = int(input())
for i in range(t):
    s = input()
    if check(s) == True:
        print("YES")
    else:
        print("NO")
    