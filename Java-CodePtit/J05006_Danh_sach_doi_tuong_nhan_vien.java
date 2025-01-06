import java.util.*;
class NhanVien{
    public String Id, Name, Gioitinh, Ngaysinh, Diachi, MSThue, NgayHopDong;

    public NhanVien(String id, String name, String gioitinh, String ngaysinh, String diachi, String mSThue, String ngayHopDong) {
        Id = id;
        Name = name;
        Gioitinh = gioitinh;
        Ngaysinh = ngaysinh;
        Diachi = diachi;
        MSThue = mSThue;
        NgayHopDong = ngayHopDong;
    }

    @Override
    public String toString() {
        return Id + " " + Name + " " + Gioitinh + " " + Ngaysinh + " " + Diachi + " " + MSThue + " " + NgayHopDong;
    }
}
public class J05006_Danh_sach_doi_tuong_nhan_vien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        for (int i = 1; i <= n; i++) {
            String Id = Integer.toString(i);
            while (Id.length() < 5) {
                Id = "0" + Id;
            }
            String Name = sc.nextLine();
            String Gioitinh = sc.nextLine();
            String Ngaysinh = sc.nextLine();
            String Diachi = sc.nextLine();
            String MSThue = sc.nextLine();
            String NgayHopDong = sc.nextLine();
            System.out.println(new NhanVien(Id, Name, Gioitinh, Ngaysinh, Diachi, MSThue, NgayHopDong));
        }
    }
}
