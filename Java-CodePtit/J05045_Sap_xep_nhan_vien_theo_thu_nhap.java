
//package com.proit4all.continue_code;

import java.util.*;
import java.math.*;

public class J05045_Sap_xep_nhan_vien_theo_thu_nhap {
     static class NhanVien{
        public String mnv, ten, chucVu;
        public Integer luongCB, soNC, luongChinh, phuCapCV, tamUng, conLai, thuNhap;

        public NhanVien(String mnv, String ten, String chucVu, Integer luongCB, Integer soNC) {
            this.mnv = mnv;
            this.ten = ten;
            this.chucVu = chucVu;
            this.luongCB = luongCB;
            this.soNC = soNC;
            this.phuCapCV = xuLy_1();
            this.luongChinh = luongCB * soNC;
            this.tamUng = xuLy_2();
            this.conLai = luongChinh - tamUng + phuCapCV;
            this.thuNhap = luongChinh + phuCapCV;
        }
        
        public int xuLy_1() {
            if (chucVu.equals("GD")) return 500;
            else if (chucVu.equals("PGD")) return 400;
            else if (chucVu.equals("TP")) return 300;
            else if (chucVu.equals("KT")) return 250;
            else return 100;
        }
        
        public int xuLy_2() {
            if ((phuCapCV + luongChinh) * 2/3 < 25000) {
                return (int) Math.round(((phuCapCV + luongChinh) * 2/3) / 1000.0) * 1000;
            }
            else return 25000;
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %d %d %d %d", mnv, ten, phuCapCV, luongChinh, tamUng, conLai);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<NhanVien> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            String mnv = "NV" + (i < 10 ? "0" : "") + i;
            list.add(new NhanVien(mnv, sc.nextLine().trim(), sc.nextLine().trim(), sc.nextInt(), sc.nextInt()));
        }
        
        list.sort((( o1, o2) -> - o1.thuNhap.compareTo(o2.thuNhap)));
        for (NhanVien x : list) {
            System.out.println(x);
        }
    }
}
