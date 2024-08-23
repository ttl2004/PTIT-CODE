def isPrime(n) :
    if n < 2 :
        return False
    for i in range(2, int(n**0.5) + 1) :
        if n % i == 0 :
            return False
    return True
t = int(input())
for i in range(t):
    s = input()
    check = 0
    for i in range(len(s)):
        if s[i] == '2' or s[i] == '3' or s[i] == '5' or s[i] == '7':
            if (isPrime(i) == False) :
                check = 1
                break
        else:
            if (isPrime(i) == True) :
                check = 1
                break
    if check == 1:
        print("NO")
    else:
        print("YES")

