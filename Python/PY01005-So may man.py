str = input()
idx = 0;
cnt = 0;
while idx < len(str):
    if str[idx] == '4' or str[idx] == '7':
        cnt += 1
    idx += 1  

if cnt == 4 or cnt == 7:
    print("YES")
else:
    print("NO")