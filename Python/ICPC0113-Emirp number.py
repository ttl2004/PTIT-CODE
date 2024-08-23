def check(n) :
    if n < 2 :
        return False
    for i in range(2, int(n**0.5) + 1) :
        if n % i == 0 :
            return False
    return True

t = int(input())
for i in range(t) :
    n = int(input())
    for j in range(1, n + 1):
        m = int(str(j)[::-1])
        #print(j, m, end = " ")
        if (m != j and j < m and m < n):
            if check(m) and check(j) :
                 print(j, m, end = " ")
        
    print()