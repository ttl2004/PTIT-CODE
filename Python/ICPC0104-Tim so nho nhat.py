t = int(input())
for i in range(t):
    s = input()
    _min = 1e19
    n = 0
    ok = 0
    for j in range(len(s)):
        if  '0' <= s[j] <= '9':
            n = n * 10 + int(s[j])
            ok = 1
        else:
            # print(int(n))
            if n < _min and ok == 1:
                _min = n
                n = 0
                ok = 0 
    if n != 0:
        if n < _min and ok == 1:
            _min = n
    print(_min)