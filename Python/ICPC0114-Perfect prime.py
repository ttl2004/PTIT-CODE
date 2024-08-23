import math

# Hàm kiểm tra số nguyên tố
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

# Hàm đảo ngược số
def reverse_number(n):
    return int(str(n)[::-1])

# Hàm tính tổng các chữ số
def digit_sum(n):
    return sum(int(d) for d in str(n))

# Hàm kiểm tra Perfect Prime
def is_perfect_prime(n):
    if not is_prime(n):
        return False
    
    reversed_n = reverse_number(n)
    if not is_prime(reversed_n):
        return False
    
    total = digit_sum(n)
    if not is_prime(total):
        return False
    
    for digit in str(n):
        if not is_prime(int(digit)):
            return False
    
    return True

# Đọc số lượng bộ test
T = int(input())
results = []

for _ in range(T):
    N = int(input())
    if is_perfect_prime(N):
        results.append("Yes")
    else:
        results.append("No")

# In kết quả
for result in results:
    print(result)
