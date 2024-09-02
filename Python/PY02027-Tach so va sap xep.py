t = int(input())
ans = []
for i in range(t):
    s = input()
    s += ' '
    num = ""
    for j in s:
        if j.isdigit():
            num = num + j
        else:
            if num != "": ans.append(int(num))
            num = ""
ans.sort()
for i in ans: print(i)