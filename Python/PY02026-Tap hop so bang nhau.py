n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

A = set(a)  
B = set(b)

if A == B:
    print("YES")
else:
    print("NO")