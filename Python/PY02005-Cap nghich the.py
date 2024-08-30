a = [0] * 1000006
cnt = 0
def merge(l, mid, r) :
    global cnt
    n1 = mid - l + 1
    n2 = r - mid
    left, right = [] * (n1 + 1), [] * (n2 + 1)
    for i in range(0, n1) :
        left.append(a[l + i])
    for i in range(0, n2) :
        right.append(a[mid + 1 + i])
    
    i, j, k, idx = 0, 0, l, l

    while i < n1 and j < n2 :
        if left[i] <= right[j] :
            a[k] = left[i]
            i += 1
            idx += 1
        else :
            a[k] = right[j]
            j += 1
            cnt += ((mid + 1) - idx)
        k += 1
    
    while i < n1:
        a[k] = left[i]
        i += 1
        k += 1
    
    while j < n2 :
        a[k] = right[j] 
        j += 1
        k += 1

def mergesort(l, r) :
    if l < r :
        mid = (l + r) // 2
        mergesort(l, mid)
        mergesort(mid + 1, r)
        merge(l, mid, r)

if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    mergesort(0, n - 1)
    print(cnt)