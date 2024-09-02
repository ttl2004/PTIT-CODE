class MatHang:
    def __init__(self, id, name, SoLuong, DonGia, ChietKhau, ThanhTien):
        self.id = id
        self.name = name
        self.SoLuong = SoLuong
        self.DonGia = DonGia
        self.ChietKhau = ChietKhau
        self.ThanhTien = ThanhTien

t = int(input())
ans = []
for i in range(t):
    id = input()
    name = input()
    SoLuong = int(input())
    DonGia = int(input())
    ChietKhau = int(input())
    ThanhTien = DonGia * SoLuong - ChietKhau
    mh = MatHang(id, name, SoLuong, DonGia, ChietKhau, ThanhTien)
    ans.append(mh)

ans.sort(key = lambda x: x.ThanhTien, reverse = True)

for i in ans:
    print(i.id, i.name, i.SoLuong, i.DonGia, i.ChietKhau, i.ThanhTien)
