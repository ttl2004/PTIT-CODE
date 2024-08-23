n, m = map(int, input().split())
a = list(map(int, input().split()))
cnt = [0] * n

for i in a: 
    cnt[i] += 1
tmp = cnt.copy()
tmp. sort(reverse = True)
max = tmp[0]
check = 0
for  i in tmp:
    if i < max and i != 0: 
        check = 1
        max = i
        break
    
if  check == 0:
    print("NONE")
else:
    for i in range(1, m + 1):
        if max == cnt[i]:
            print(i, end = " ")
            break
