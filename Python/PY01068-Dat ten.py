import itertools
n, k = map(int, input().split())
tmp = list(map(str, input().split()))
a = set(tmp)
a = list(a)
a.sort()
ans = itertools.combinations(a, k)
for i in ans:
    print(" ".join(i))