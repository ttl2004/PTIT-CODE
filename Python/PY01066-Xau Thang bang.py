import math
def check(s, s1):
    for i in range(1, len(s)):
        if abs(ord(s[i]) - ord(s[i - 1])) != abs(ord(s1[i]) - ord(s1[i - 1])):
            return False
    return True
t = int(input())
for i in range(t):
    s = input()
    s1 = s[::-1]
    if check(s, s1):
        print("YES")
    else:
        print("NO")
