s = input()
cnt = 0
if int(s) < 10: cnt = 1
while len(s) > 1:
    cnt += 1
    sum = 0
    for i in range(len(s)):
        sum += ord(s[i]) - 48
    s = str(sum)
print(cnt)