from itertools import combinations

# Đọc dữ liệu đầu vào
n, k = map(int, input().split())
a = list(map(int, input().split()))

# Loại bỏ các phần tử trùng lặp và sắp xếp danh sách
distinct_elements = sorted(set(a))

# Sinh các tổ hợp chập k từ danh sách các phần tử khác nhau
combs = combinations(distinct_elements, k)

# In ra kết quả
for comb in combs:
    print(" ".join(map(str, comb)))
