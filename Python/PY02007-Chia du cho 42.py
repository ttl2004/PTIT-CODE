a = []
while len(a) < 10:
    s = input()
    a.extend(map(int, s.split()))

for i in range(10):
    a[i] = a[i] % 42

res = set(a)
print(len(res))