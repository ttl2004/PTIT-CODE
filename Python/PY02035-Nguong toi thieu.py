s = input()
k = int(input())
if len(s) % 2 != 0: s = s[:len(s) - 1]
a = []
mp = {}
for i in range(0, len(s), 2):
    if s[i:i + 2] not in mp: 
        a.append(int(s[i:i + 2]))
        mp[s[i:i + 2]] = 1
    else:
        mp[s[i:i + 2]] += 1
a.sort()
check = 0
for i in range(len(a)):
    if mp[str(a[i])] >= k:
        print(a[i], mp[str(a[i])])
        check = 1

if check == 0: print("NOT FOUND")