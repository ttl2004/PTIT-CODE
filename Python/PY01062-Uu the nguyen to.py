def check(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def xuly(s):
    if check(len(s)) == False:
        return False
    cnt_0 = cnt_1 = 0
    for i in s:
        if i == '2' or i == '3' or i == '5' or i == '7':
            cnt_0 += 1
        else :
            cnt_1 += 1
    if cnt_0 <= cnt_1:
        return False
    return True
t = int(input())
for i in range(t):
    s = input()
    if xuly(s):
        print("YES")
    else:
        print("NO")