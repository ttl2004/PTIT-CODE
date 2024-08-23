t = int(input())

for i in range(t):
    s = input()
    n = input()
    k = len(s)
    f = len(n)
    new_s = s.replace(n, "")

    print((k - len(new_s)) // f)