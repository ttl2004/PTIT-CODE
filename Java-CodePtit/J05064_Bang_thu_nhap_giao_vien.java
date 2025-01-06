
//package com.proit4all.continue_code;

import java.util.*;
public class J05064_Bang_thu_nhap_giao_vien {
    static class GiaoVien{
        public String id , name;
        public Integer luongCB, bacLuong, phuCap, thuNhap;

        public GiaoVien(String id, String name, Integer luongCB) {
            this.id = id;
            this.name = name;
            this.luongCB = luongCB;
            this.bacLuong = Integer.parseInt(id.substring(2));
            this.phuCap = Xuly_1();
            this.thuNhap = luongCB * bacLuong + phuCap;
        }
        
        public Integer Xuly_1() {
            String s = id.substring(0, 2);
            if (s.equals("HT")) return 2000000;
            else if (s.equals("HP")) return 900000;
            else return 500000;
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %d %d %d", id, name, bacLuong, phuCap, thuNhap);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt(), cntHT = 0, cntHP = 0;
        
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            String id = sc.nextLine().trim();
            String chucVu = id.substring(0, 2);
            String name = sc.nextLine();
            Integer luongCB = sc.nextInt();
            if (chucVu.equals("HT")) {
                cntHT ++;
                if (cntHT > 1) continue;
            }
            else if (chucVu.equals("HP")) {
                cntHP ++;
                if (cntHP > 2) continue;
            }
            System.out.println(new GiaoVien(id, name, luongCB));
        }
    }
}
