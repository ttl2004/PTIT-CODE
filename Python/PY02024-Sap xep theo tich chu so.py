from functools import cmp_to_key
def mul(n):
    res = 1 
    while n > 0:
        res *= n % 10
        n //= 10
    return res

def compare(n1, n2):
    x = mul(n1)
    y = mul(n2)
    if x == y:
        if n1 < n2: return -1
        else: return 1
    else: 
        if x > y: return 1
        else: return -1

t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    arr =  sorted(a, key = cmp_to_key(compare))
    for j in range(n):
        print(arr[j], end = " ")
    print()
