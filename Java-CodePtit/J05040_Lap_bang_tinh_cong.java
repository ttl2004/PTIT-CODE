
//package com.proit4all.continue_code;
import java.util.*;
import java.math.*;
public class J05040_Lap_bang_tinh_cong {
    static class NhanVien{
        public String mnv, ten, chucVu;
        public Long ngayCong, luongThang, thuong, phuCapCV, thucLinh;

        public NhanVien(String mnv, String ten, Long luongNgay, Long ngayCong, String chucVu) {
            this.mnv = mnv;
            this.ten = ten.trim();
            this.ngayCong = ngayCong;
            this.chucVu = chucVu.trim();
            this.luongThang = luongNgay * ngayCong;
            this.thuong = xuly_1();
            this.phuCapCV = xuly_2();
            this.thucLinh = thuong + luongThang + phuCapCV;
        }
        
        public Long xuly_1(){
            if (ngayCong >= 25) return  (long)(luongThang * 0.2);
            else if (ngayCong >= 22) return  (long) (luongThang * 0.1);
            else return 0L;
        }
        
        public Long xuly_2(){
            if (chucVu.equals("GD")) return 250000L;
            else if (chucVu.equals("PGD")) return 200000L;
            else if (chucVu.equals("TP")) return 180000L;
            else return 150000L;
        }
        
        @Override
        public String toString(){
            return String.format("%s %s %d %d %d %d", mnv, ten, luongThang, thuong, phuCapCV, thucLinh);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        sc.nextLine();
        for (int i = 1; i <= n; i ++) {
            String mnv = "NV" + (i < 10 ? "0" : "") + i;
            String ten = sc.nextLine();
            Long luongNgay = sc.nextLong(), ngayCong = sc.nextLong();
            sc.nextLine();
            String chucVu = sc.nextLine();
            NhanVien f = new NhanVien(mnv, ten, luongNgay, ngayCong, chucVu);
            System.out.println(f);
        }     
    }
}
