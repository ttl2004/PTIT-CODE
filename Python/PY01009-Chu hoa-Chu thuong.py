str = input()
cnt1 = 0
cnt2 = 0

for i in range(len(str)):
    if str[i] >= 'a' and str[i] <= 'z':
        cnt1 += 1
    else:
        cnt2 += 1

if cnt1 < cnt2:
    print(str.upper())
else:
    print(str.lower())