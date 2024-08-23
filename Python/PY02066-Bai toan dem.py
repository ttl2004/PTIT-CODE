n =int(input())
a = []
while len(a) < n:
    tmp = list(map(int, input().split()))
    a = a + tmp
a.sort()
_max = max(a)
check = 0
for i in range(1, _max + 1):
    if  i not in a:
        print(i)
        check = 1
if check == 0:
    print("Excellent!")