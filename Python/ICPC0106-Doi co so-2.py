def CDoi_1(s):
    return (ord(s[0]) - 48) * 2 + (ord(s[1]) - 48) * 1

def CDoi_2(s):
    return (ord(s[0]) - 48) * 4 + (ord(s[1]) - 48) * 2 + (ord(s[2]) - 48) * 1

def CDoi_3(s):
    f = (ord(s[0]) - 48) * 8 + (ord(s[1]) - 48) * 4 + (ord(s[2]) - 48) * 2  + (ord(s[3]) - 48) * 1
    if f == 10: return 'A'
    if f == 11: return 'B'
    if f == 12: return 'C'
    if f == 13: return 'D'
    if f == 14: return 'E'
    if f == 15: return 'F'
    return f

t = int(input())
for  _ in range(t):
    b = int(input())
    s = input()
    if b == 2:
        print(s)
    elif b == 4:
        while len(s) % 2 != 0:
            s = '0' + s
        for i in range(0, len(s), 2):
            print(CDoi_1(s[i:i+2]), end = '')
        print()
    elif b == 8:
        while len(s) % 3 != 0:
            s = '0' + s
        for i in range(0, len(s), 3):
            print(CDoi_2(s[i:i+3]), end = '')
        print()
    else:
        while len(s) % 4 != 0:
            s = '0' + s
        for i in range(0, len(s), 4):
            print(CDoi_3(s[i:i+4]), end = '')
        print()