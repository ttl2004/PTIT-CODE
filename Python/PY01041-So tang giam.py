t = int(input())
for i in range(t):
    a = [int(x) for x in input()]
    k = len(a)
    left = [1] * k
    right = [1] * k

    for i in range(1, k):
        if a[i] > a[i - 1]:
            left[i] = left[i - 1] + 1
    
    for i in range(k - 2, -1, -1):
        if a[i] > a[i + 1]:
            right[i] = right[i + 1] + 1

    check = 0
    for i in range(k):
        if (left[i] + right[i] - 1) == k:
            check = 1
            break

    if check == 1 and k >= 3:
        print("YES")
    else:
        print("NO")