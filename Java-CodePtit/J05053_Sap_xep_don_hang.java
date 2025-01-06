
//package com.proit4all.continue_code;
import java.util.*;
import java.math.*;
public class J05053_Sap_xep_don_hang {
    static class MatHang{
        public String ten, ma, sTT;
        public Long donGia, soLuong, giamGia, thanhTien;

        public MatHang(String ten, String ma, Long donGia, Long soLuong) {
            this.ten = ten;
            this.ma = ma;
            this.donGia = donGia;
            this.soLuong = soLuong;
            this.sTT = ma.substring(1, 4);
            this.giamGia = (ma.charAt(ma.length() - 1) == '1' ? (long) (0.5 * donGia * soLuong) : (long) (0.3 * donGia * soLuong));
            this.thanhTien = donGia * soLuong - giamGia;
        }
        
        @Override
        public String toString() {
            return  String.format("%s %s %s %d %d", ten, ma, sTT, giamGia, thanhTien);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<MatHang> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            list.add(new MatHang(sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLong(), sc.nextLong()));
        }
        
        list.sort((( o1, o2) -> o1.sTT.compareTo(o2.sTT)));
        
        for (MatHang x : list) {
            System.out.println(x);
        }
    }
}
