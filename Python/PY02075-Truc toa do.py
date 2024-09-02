if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        a = []
        for j in range(n):
            a.append([int(x) for x in input().split()])
        a.sort(key = lambda x: x[1])
        cnt, truoc = 0, -1
        for j in a:
            if j[0] >= truoc:
                cnt += 1
                truoc = j[1]
        
        print(cnt)