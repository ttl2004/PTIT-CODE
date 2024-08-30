
n = int(input())
mp = {}
for _ in range(n):
    s = ''
    for i in input().lower() + ' ':
        if ('a' <= i <= 'z') or ('0' <= i <= '9'):
            s += i
        else:
            if s != '':
                if s not in mp:
                    mp[s] = 1
                else:
                    mp[s] += 1
                s = ''
    

mp = sorted(mp.items(), key = lambda x: [-x[1], x[0]])
for i in mp:
    print(i[0], i[1])