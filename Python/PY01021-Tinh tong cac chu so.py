t = int(input())
for i in range(t):
    s = input()
    sum = 0
    for j in range(len(s)):
        if s[j] >= '0' and s[j] <= '9':
            sum += int(s[j]) 
    s = sorted(s)   
    for j in range(len(s)):
        if s[j] >= 'A' and s[j] <= 'Z':
            print(s[j], end = '') 
    print(sum)