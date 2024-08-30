def xuly(arr):
    if len(arr) < 4: 
        return 0
    for i in arr:
        if i.isdigit():
            if  0 > int(i) or int(i) > 255:
                return 0
        else:
            return 0
        
    return 1

t = int(input())
for _ in range(t):
    s = input()
    arr = s.split('.')
    if xuly(arr) == 1:
        print("YES")
    else:
        print("NO")
