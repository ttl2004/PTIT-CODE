
//package com.proit4all.continue_code;

import java.util.*;

public class J05012_Tinh_tien {
    static class MH{
        public String id, name;
        public Long sLg, donGia, chietKhau, total;

        public MH(String id, String name, Long sLg, Long donGia, Long chietKhau) {
            this.id = id;
            this.name = name;
            this.sLg = sLg;
            this.donGia = donGia;
            this.chietKhau = chietKhau;
            this.total = donGia * sLg - chietKhau;
        }
        
        @Override 
        public String toString() {
            return String.format("%s %s %d %d %d %d", id, name, sLg, donGia, chietKhau, total);
        }
        
    }

    public J05012_Tinh_tien() {
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        List<MH> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            list.add(new MH(sc.nextLine(), sc.nextLine(), sc.nextLong(), sc.nextLong(), sc.nextLong()));
        }
        list.sort((o1, o2) -> o2.total.compareTo(o1.total));
        for (MH x : list) {
            System.out.println(x);
        }
    }
}
