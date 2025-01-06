import java.util.*;
import java.lang.Math.*;

public class J04012_Bai_toan_tinh_cong {
    public static long TienThuong(long LuongThang, long Ngaycong) {
        if (Ngaycong >= 25) return LuongThang * 20 / 100;
        else if (Ngaycong >= 22) return LuongThang * 10 / 100;
        else return 0;
    }

    public static long PhuCap(String ChucVu) {
        if (ChucVu.equals("GD")) return 250000;
        else if (ChucVu.equals("PGD")) return 200000;
        else if (ChucVu.equals("TP")) return 180000;
        else return 150000;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        long LuongCoBan = sc.nextLong();
        long Ngaycong = sc.nextLong();
        sc.nextLine();
        String ChucVu = sc.nextLine();
        long LuongThang = LuongCoBan * Ngaycong;
        long Thuong = TienThuong(LuongThang, Ngaycong);
        long Phucap = PhuCap(ChucVu);
        long ThuNhap = LuongThang + Thuong + Phucap;
        System.out.println("NV01 "  + name + " " + LuongThang + " " + Thuong + " " + Phucap + " " + ThuNhap);
    }
}
