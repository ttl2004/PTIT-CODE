t = int(input())
k = 1
for i in range(t):
    s1 = input()
    s2 = input()
    mp = {}
    mp2 = {}
    for i in range(len(s1)):
        if s1[i] not in mp:
            mp[s1[i]] = 1
        else:
            mp[s1[i]] += 1
    for i in range(len(s2)):
        if s2[i] not in mp2:
            mp2[s2[i]] = 1
        else:
            mp2[s2[i]] += 1

    print("Test " + str(k) + ": ", end="")
    if mp == mp2:
        print("YES")
    else:
        print("NO")
    k += 1
