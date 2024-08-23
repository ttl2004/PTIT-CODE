def insert_string(S1, S2, p):
    # Chia S1 thành hai phần
    part1 = S1[:p-1]
    part2 = S1[p-1:]
    
    # Chèn S2 vào giữa hai phần
    result = part1 + S2 + part2
    return result

# Đọc đầu vào
S1 = input().strip()
S2 = input().strip()
p = int(input().strip())

# Gọi hàm và in kết quả
print(insert_string(S1, S2, p))
