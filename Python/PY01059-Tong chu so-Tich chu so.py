t = int(input())
for i in range (t):
    s = input()
    sum = 0
    mul = 1
    cnt = 0
    for j in range(len(s)):
        if (j % 2 == 0): sum += int(s[j])
        else:
            if s[j] != '0': 
                mul *= int(s[j])
                cnt += 1
    if cnt == 0:
        print(sum, 0)
    else:
        print(sum, mul)