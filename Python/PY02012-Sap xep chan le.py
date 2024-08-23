n = int(input())

# Nhập toàn bộ dãy số rải rác trên nhiều dòng
a = []
while len(a) < n:
    a += list(map(int, input().split()))

# Tách các số chẵn và số lẻ từ danh sách đã sắp xếp
b = a.copy()
x = sorted([num for num in b if num % 2 == 0])  # Sắp xếp số chẵn tăng dần
y = sorted([num for num in b if num % 2 != 0], reverse=True)  # Sắp xếp số lẻ giảm dần

# Duyệt qua dãy ban đầu và thay thế số chẵn, lẻ theo vị trí
i, f = 0, 0
for k in range(n):
    if a[k] % 2 != 0:
        print(y[i], end=" ")
        i += 1
    else:
        print(x[f], end=" ")
        f += 1
