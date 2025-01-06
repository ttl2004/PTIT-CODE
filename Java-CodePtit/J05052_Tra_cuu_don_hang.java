//package com.proit4all.continue_code;
import java.util.*;
public class J05052_Tra_cuu_don_hang {
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
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            System.out.println(new MatHang(sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLong(), sc.nextLong()));
        }
    }
}
