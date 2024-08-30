# fi = open("E:\Code_Ptit\PyThon - codeptit\python - test\hello.txt", "r")
def check(s):

    for i in s:
        if not('0' <= i <= '9'):
            return True
        else :
            continue
    if -2147483648 <= int(s) <= 2147483647:
        return False
    else:
        return True

fi = open("DATA.in", "r")
mp = []
for line in fi: 
    arr = line.split()
    for i in arr:
        if check(i):
            mp.append(i)
mp.sort()
print(*mp)
