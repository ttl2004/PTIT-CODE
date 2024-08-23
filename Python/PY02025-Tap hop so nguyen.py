# Đọc đầu vào
n, m = map(int, input().strip().split())
a = list(map(int, input().strip().split()))
b = list(map(int, input().strip().split()))

# Tạo tập hợp A và B từ các phần tử khác nhau của a[] và b[]
A = set(a)
B = set(b)

# Tìm giao của A và B, hiệu A - B, và hiệu B - A
intersection = sorted(A & B)
difference_A_B = sorted(A - B)
difference_B_A = sorted(B - A)

# In kết quả
print(' '.join(map(str, intersection)))
print(' '.join(map(str, difference_A_B)))
print(' '.join(map(str, difference_B_A)))
