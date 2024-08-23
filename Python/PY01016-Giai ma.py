t = int(input())
for i in range(t):
    str = input()
    idx = 0
    string = ""
    while idx < len(str):
        if str[idx] >= '0' and str[idx] <= '9':
            n = int(str[idx])
            for j in range(n):
                print(string, end = "")
        else:
            string = str[idx]
        idx += 1
    print()