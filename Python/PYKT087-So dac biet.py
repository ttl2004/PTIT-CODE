MOD = 10**9 + 7
def xuly(N, K):
    result = 0
    f = 1 
    while K > 0:
        if K % 2 == 1: 
            result = (result + f) % MOD
        f = (f * N) % MOD
        K //= 2  

    return result

t = int(input())
results = []

for _ in range(t):
    N, K = map(int, input().split())
    print(xuly(N, K))