t = int(input())
for i in range(t):
    s = input()
    s = s + 'z'
    ans = 0
    num = 0
    for i in range(len(s)) :
        if s[i].isalpha() :
            if i != 0 and s[i - 1].isdigit(): 
                ans = max(ans, num)
            num = 0
        else : num = num * 10 + int(s[i])
    print(ans)