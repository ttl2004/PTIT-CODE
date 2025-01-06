
//package com.proit4all.continue_code;

import java.util.*;
import java.math.*;
public class J05037_Tinh_gia_ban_2 {
    static class MatHang{
        public String id, name, donVi;
        public Long donGia, soLuong, phiVC, thanhTien, giaBan;

        public MatHang(String id, String name, String donVi, Long donGia, Long soLuong) {
            this.id = id;
            this.name = name;
            this.donVi = donVi;
            this.donGia = donGia;
            this.soLuong = soLuong;
            this.phiVC = xuLy_1();
            this.thanhTien = xuLy_2();
            this.giaBan = xuLy_3();
        }
        
        public Long xuLy_1(){
            return (long)Math.round(donGia * soLuong * 0.05);
        }
        
        public Long xuLy_2(){
            return (long) Math.round(donGia * soLuong  + phiVC);
        }
        
        public Long xuLy_3() {
            return (long) Math.ceil(((thanhTien + (0.02 * thanhTien)) / soLuong)/100.0) * 100;
        }
        
        @Override
        public String toString(){
            return String.format("%s %s %s %d %d %d", id, name, donVi, phiVC, thanhTien, giaBan);
        }
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<MatHang> list = new ArrayList<>();
        
        int n = sc.nextInt();
        
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            String id = "MH" + (i < 10 ? "0" : "") + i;
            MatHang f = new MatHang(id, sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLong(), sc.nextLong());
            list.add(f);
        }
        list.sort((o1, o2) -> Long.compare(o2.giaBan, o1.giaBan));
        
        for (MatHang x : list) {
            System.out.println(x);
        }
        
        
    }
}
