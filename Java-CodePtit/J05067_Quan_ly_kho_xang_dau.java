
//package com.proit4all.continue_code;

import java.util.*;

public class J05067_Quan_ly_kho_xang_dau {
    static  class MatHang{
        public String id, hang;
        public Long soLuong, donGia, thue, thanhTien;

        public MatHang(String id,Long soLuong) {
            this.id = id;
            this.soLuong = soLuong;
            this.hang = Xuly_1();
            Xuly_2();
            if (hang.equals("Trong Nuoc")) thue = 0L;
            this.thanhTien = soLuong * donGia + thue;
        }
        
        public String Xuly_1() {
            String s = id.substring(3);
            if (s.equals("BP")) return "British Petro";
            else if (s.equals("ES")) return "Esso";
            else if (s.equals("SH")) return "Shell";
            else if (s.equals("CA")) return "Castrol";
            else if (s.equals("MO")) return "Mobil";
            else return "Trong Nuoc";
        }
        
        public void Xuly_2() {
            if (id.charAt(0) == 'X') {
                this.donGia = 128000L;
                this.thue = (long) (donGia * soLuong * 0.03);
            }
            else if (id.charAt(0) == 'D') {
                this.donGia = 11200L;
                this.thue = (long) (donGia * soLuong * 0.035);
            }
            else {
                this.donGia = 9700L;
                this.thue = (long) (donGia * soLuong * 0.02);
            }
        }
        
        @Override 
        public String toString(){
            return String.format("%s %s %d %d %d", id, hang, donGia, thue, thanhTien);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        for (int i = 0; i < n; i ++) {
            System.out.println(new MatHang(sc.next(), sc.nextLong()));
        }
    }
}
