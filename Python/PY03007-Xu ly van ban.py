import re
s = ''
while True:
    try:
        s += input()
    except:
        break
arr = re.split('[.?!]', s)

for i in arr:
    if len(i) != 0:
        i = i.lower().split()
        i[0] = i[0][:1].upper() + i[0][1::]
        print(" ".join(i))

