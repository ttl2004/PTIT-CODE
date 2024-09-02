ans = []

def Try(s, n, a, b, c, d):
    if 4 <= len(s) <= n and s[-1] != '2' and a > 0 and b > 0 and c > 0 and d > 0:
        ans.append(int(s))
    
    # Điều kiện dừng: chỉ gọi đệ quy khi độ dài hiện tại nhỏ hơn n
    if len(s) < n:
        Try(s + '2', n, a + 1, b, c, d)
        Try(s + '3', n, a, b + 1, c, d)
        Try(s + '5', n, a, b, c + 1, d)
        Try(s + '7', n, a, b, c, d + 1)

n = int(input())
Try("", n, 0, 0, 0, 0)
ans.sort()
for i in ans:
    print(i)
