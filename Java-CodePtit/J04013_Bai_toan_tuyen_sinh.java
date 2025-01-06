import java.util.*;
import java.lang.Math.*;

public class J04013_Bai_toan_tuyen_sinh {
    public static double check(String id) {
        String tmp = id.substring(0, 3);
        if (tmp.equals("KV1")) return 0.5;
        else if (tmp.equals("KV2")) return 1;
        else return 2.5;
    }

    public static String check_1(double Tong) {
        if (Tong >= 24) return "TRUNG TUYEN";
        else return "TRUOT";
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String id = sc.nextLine();
        String name = sc.nextLine();
        double toan = sc.nextDouble();
        double ly = sc.nextDouble();
        double hoa = sc.nextDouble();
        double diemUutien = check(id);
        double Tong =  toan * 2 + ly + hoa;
        String ketQua = check_1(Tong + diemUutien);
        if  (diemUutien == 1.0) {
            if (Tong == (int)Tong) {
                System.out.println(id + " " + name + " " +  (int)diemUutien + " " + (int)Tong + " " + ketQua);
            }
            else System.out.println(id + " " + name + " " +  (int)diemUutien + " " + Tong + " " + ketQua);
        }
        else {
            if (Tong == (int)Tong) {
                System.out.println(id + " " + name + " " +  diemUutien + " " + (int)Tong + " " + ketQua);
            }     
            else System.out.println(id + " " + name + " " +  diemUutien + " " + Tong + " " + ketQua);
              
        }

    }

}
