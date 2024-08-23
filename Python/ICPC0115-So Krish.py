import math
t = int(input())
for i in range(t):
    n = int(input())
    s = str(n)
    sum = 0
    for j in range(len(s)):
        sum += math.factorial(int(s[j]))
    if sum == n:
        print("Yes")    
    else:
        print("No")    
