s = (input()).strip().lower()
s1 = (input()).strip().lower()
a1 = set(s.split())
a2 = set(s1.split())
ans1 = sorted(a1 | a2)
ans2 = sorted(a1 & a2)

for i in range(len(ans1)):
    print(ans1[i], end = " ")
print()
for i in range(len(ans2)):
    print(ans2[i], end = " ")