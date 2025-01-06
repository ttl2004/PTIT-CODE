
//package com.proit4all.continue_code;

import java.util.*;

public class J05076_Nhap_xuat_hang {
    static class MH{
        public String id, name, type;
        public Long sLgNhap, donGiaNhap, sLgXuat, totalNhap, totalXuat;

        public MH(String id, String name, String type) {
            this.id = id;
            this.name = name;
            this.type = type;
        }
        
        public void Xuly(Long sLgNhap, Long donGiaNhap, Long sLgXuat) {
            this.totalNhap = sLgNhap * donGiaNhap;
            if (type.equals("A")) this.totalXuat = (long) (donGiaNhap * sLgXuat + donGiaNhap * sLgXuat * 0.08);
            else if (type.equals("B")) this.totalXuat = (long) (donGiaNhap * sLgXuat + donGiaNhap * sLgXuat * 0.05);
            else this.totalXuat = (long) (donGiaNhap * sLgXuat + donGiaNhap * sLgXuat * 0.02);
        }
        @Override
        public String toString() {
            return String.format("%s %s %d %d", id, name, totalNhap, totalXuat);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        Map<String, MH> mp = new TreeMap<>();
        sc.nextLine();
        for (int i = 0; i < n; i ++) {
            String id = sc.nextLine().trim();
            mp.put(id, new MH(id, sc.nextLine(), sc.nextLine()));
        }
        
        int m = sc.nextInt();
        for (int i = 0; i < m; i ++) {
            String id = sc.next();
            Long sLgNhap = sc.nextLong(), donGiaNhap = sc.nextLong(), sLgXuat = sc.nextLong();
            mp.get(id).Xuly(sLgNhap, donGiaNhap, sLgXuat);
            System.out.println(mp.get(id));
        }
    }
}
