n = input()
n = n[::-1]
m = ""
cnt = 0
for i in range(len(n)):
    cnt += 1
    m += n[i]
    if cnt == 3 and i != len(n) - 1: 
        m += ","
        cnt = 0

print(m[::-1])