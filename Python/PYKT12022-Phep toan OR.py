n = int(input())
a = [int(x) for x in input().split()]
f1, f2 = set(), set()
for i in a:
    tmp = set()
    for j in f1:
        tmp.add(i | j)
        f2.add(i | j)
    
    f2.add(i)
    tmp.add(i)
    f1 = tmp

print(len(f2))

