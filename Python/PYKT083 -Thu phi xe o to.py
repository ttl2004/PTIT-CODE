def cnt(a, b):
    if a == "Xe_con":
        if b == "5": return 10000
        if b == "7": return 15000
    elif a == "Xe_tai" and b == "2" : return 20000
    else: 
        if b == "29": return 50000
        else: return 70000
t = int(input())
m = {}
for test in range(t):
    a = input().split()
    if a[3] == 'IN':
        if a[4] not in m:
            m[a[4]] = cnt(a[1], a[2])
        else: 
            m[a[4]] += cnt(a[1], a[2])
m = sorted(m.items(), key = lambda x: x[0])
for i in m:
    print(str(i[0]) + ':', i[1])