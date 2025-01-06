
//package com.proit4all.continue_code;

import java.util.*;
import java.math.*;

public class J05046_Bang_ke_nhap_kho {
    static class MatHang{
        public String mmh, ten;
        public Long sLg, donGia, tienChietKhau, thanhTien;

        public MatHang(String mmh, String ten, Long sLg, Long donGia) {
            this.mmh = mmh;
            this.ten = ten;
            this.sLg = sLg;
            this.donGia = donGia;
            this.tienChietKhau = (long)(donGia * sLg * xuly_1());
            this.thanhTien = donGia * sLg - tienChietKhau;
        }
        
        public double xuly_1() {
            if (sLg > 10) return 0.05;
            else if (sLg >= 8) return 0.02;
            else if (sLg >= 5) return 0.01;
            else return 0.0;
        }
        
        @Override
        public String toString () {
            return mmh + " " + ten + " " + tienChietKhau + " " + thanhTien;
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        Map<String, Integer> mp = new TreeMap<>();
        
        int n = sc.nextInt();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            String ten = sc.nextLine().trim();
            String [] tmp = ten.split("\\s+");
            String mmh = "" + tmp[0].charAt(0) + tmp[1].substring(0, 1).toUpperCase();
            if (mp.containsKey(mmh) == false) mp.put(mmh, 1);
            int sTT = mp.get(mmh);
            mp.put(mmh, sTT + 1);
            mmh += (sTT < 10 ? "0" : "") + sTT;
            System.out.println(new MatHang(mmh, ten, sc.nextLong(), sc.nextLong()));
        }
    }
}
