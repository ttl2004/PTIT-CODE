#fi = open("E:\Code_Ptit\PyThon - codeptit\python - test\hello.txt", "r")
fi = open("CONTACT.in", "r")
mp = {}
for line in fi: 
    line = line.strip().lower()
    if line not in mp:
        mp[line] = 1
    else:
        mp[line] += 1

mp = sorted(mp.items(), key = lambda x: x[0])
for i in mp:
    print(i[0])
