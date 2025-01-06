
//package com.proit4all.continue_code;

import java.util.*;
import java.math.*;
public class J05049_Liet_ke_nhap_xuat_hang_theo_nhom {
     static class Hang{
        public String ma;
        public Long sLgNhap, sLgXuat, donGia, tien, thue;

        public Hang(String ma, Long sLgNhap) {
            this.ma = ma;
            this.sLgNhap = sLgNhap;
            this.sLgXuat = (ma.substring(0, 1).equals("A")  == true ? (long) Math.round(0.6 * sLgNhap) : (long) Math.round(0.7 * sLgNhap));
            this.donGia = (ma.charAt(ma.length() - 1) == 'Y' ? 110000L : 135000L);
            this.tien = sLgXuat * donGia;
            this.thue = xuly_1(this.tien);
        }
        
        public Long xuly_1(Long tien) {
            if (ma.substring(0, 1).equals("A")) {
                if (ma.charAt(ma.length() - 1) == 'Y') return (long) (0.08 * tien);
                else return (long) (0.11 * tien);
            }
            else {
                if (ma.charAt(ma.length() - 1) == 'Y') return (long) (0.17 * tien);
                else return (long) (0.22 * tien);
            }
        }
        
        @Override
        public String toString() {
            return String.format("%s %d %d %d %d %d", ma, sLgNhap, sLgXuat, donGia, tien, thue);
        }
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<Hang> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            list.add(new Hang(sc.nextLine().trim(), sc.nextLong()));
        }
        
        
        sc.nextLine();
        String c = sc.nextLine();
        list.sort(((o1, o2) -> - o1.thue.compareTo(o2.thue)));
        for (Hang x : list) {
            if (x.ma.substring(0, 1).equals(c)) {
                System.out.println(x);
            }
        }
    }
}
