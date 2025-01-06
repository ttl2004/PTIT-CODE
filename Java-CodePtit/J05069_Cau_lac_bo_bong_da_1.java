//package com.proit4all.continue_code;

import java.util.*;
public class J05069_Cau_lac_bo_bong_da_1 {
    static class CLB{
        public String ma, ten;
        public Long giaVe, total;

        public CLB(String ma, String ten, Long giaVe) {
            this.ma = ma;
            this.ten = ten;
            this.giaVe = giaVe;
        }
        
        @Override
        public String toString() {
            return String.format("%s %s", ma, ten);
        }
        
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        Map<String, CLB> mp = new TreeMap<>();
        for (int i = 0 ; i < n; i ++) {
            sc.nextLine();
            String ma = sc.nextLine().trim();
            mp.put(ma, new CLB(ma, sc.nextLine().trim(), sc.nextLong()));
        }
        
        int m = sc.nextInt();
        for (int i = 0; i < m; i ++) {
            String id = sc.next();
            Long Slg = sc.nextLong();
            CLB kq = mp.get(id.substring(1, 3));
            kq.total = kq.giaVe * Slg;
            System.out.println(id + " " + kq.ten + " " + kq.total);
        }
    }
}
