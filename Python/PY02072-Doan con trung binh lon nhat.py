n = int(input())
a = list(map(int, input().split()))
a.append(-1)
_max = max(a)
_len = 0
ans = 1
if a[0] == _max:
    _len = 1
for i in range(1, n + 1):
    if a[i] == _max:
        if a[i - 1] == _max:
            _len += 1
        else:
            _len = 1
    else :
       if a[i - 1] == _max:
           ans = max(ans, _len)

print(ans)