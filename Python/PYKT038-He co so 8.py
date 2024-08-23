def xuly(s) :
    return (ord(s[0]) - 48) * 4 + (ord(s[1]) - 48) * 2 + (ord(s[2]) - 48) * 1

s = input()
while len(s) % 3 != 0: 
    s = '0' + s
for i in range(0, len(s), 3):
    print(xuly(s[i:i+3]), end = '')