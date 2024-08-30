
def Try(pos, a, n, s, ans, res):
    if s == 0:
        str_ans = " ".join(map(str, ans))
        str_result = f"({str_ans})"
        res.append(str_result)
        return
    
    for i in range(pos, n + 1):
        if s - a[i] >= 0:
            ans.append(a[i])
            Try(i, a, n, s - a[i], ans, res)
            ans.pop()

def main():
    t = int(input())
    while t > 0:
        n = int(input())
        s = n
        a = [0] * (n + 5)
        ans = []
        res = []
        for i in range(1, n + 1):
            a[i] = n - i + 1
        Try(1, a, n, s, ans, res)
        print(len(res))
        for i in res:
            print(i, end=" ")
        print()
        t -= 1

if __name__ == "__main__":
    main()
