
p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while True:
    ip = input()
    if ip == "0":
        break
    k, s = ip.split()
    k = int(k)
    res = ""
    for i in s:
        res += p[(p.index(i) + k) % 28]
    print(res[::-1])
