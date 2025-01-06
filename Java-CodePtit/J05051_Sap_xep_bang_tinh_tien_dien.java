
//package com.proit4all.continue_code;

import java.util.*;
import java.math.*;

public class J05051_Sap_xep_bang_tinh_tien_dien {
    static class KhachHang{
        public String ma, loaiKH;
        public Long csCu, csMoi, heSo, thanhTien, phuNoi, tong;

        public KhachHang(String ma, String loaiKH, Long csCu, Long csMoi) {
            this.ma = ma;
            this.loaiKH = loaiKH;
            this.csCu = csCu;
            this.csMoi = csMoi;
            this.heSo = Xuly_1();
            this.thanhTien = (csMoi - csCu) * heSo * 550;
            this.phuNoi = Xuly_2();
            this.tong = phuNoi + thanhTien;
        }
        
        public Long Xuly_1() {
            if (loaiKH.equals("KD")) return 3L;
            else if (loaiKH.equals("NN")) return 5L;
            else if (loaiKH.equals("TT")) return 4L;
            else return 2L;
        }
        
        public Long Xuly_2() {
            Long f = csMoi - csCu;
            if (f < 50) return 0L;
            else if (f >= 50 && f <= 100) return (long) Math.ceil(thanhTien * 0.35);
            else return (long) Math.ceil(thanhTien);
        }
        
        @Override
        public String toString() {
            return String.format("%s %d %d %d %d", ma, heSo, thanhTien, phuNoi, tong);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<KhachHang> list = new ArrayList<>();
        
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            String ma = "KH" + (i < 10 ? "0" : "") + i;
            list.add(new KhachHang(ma, sc.nextLine().trim(), sc.nextLong(), sc.nextLong()));
        }
        list.sort((o1, o2) -> o2.tong.compareTo(o1.tong));
        
        for (KhachHang x : list) {
            System.out.println(x);
        }
    }
}
