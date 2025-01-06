
//package com.proit4all.continue_code;

import java.util.*;

public class J05070_Cau_lac_bo_bong_da_2 {
    static class CLB{
        public String ma, ten, maTran;
        public Long giaVe, total;

        public CLB(String ma, String ten, Long giaVe) {
            this.ma = ma;
            this.ten = ten;
            this.giaVe = giaVe;
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %d", maTran, ten, total);
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
        List<CLB> list = new ArrayList<>();
        for (int i = 0; i < m; i ++) {
            String id = sc.next();
            Long Slg = sc.nextLong();
            CLB kq = mp.get(id.substring(1, 3));
            kq.total = kq.giaVe * Slg;
            kq.maTran = id;
            list.add(kq);
        }
        
        Collections.sort(list, new Comparator<CLB> () {
            @Override
            public int compare(CLB o1, CLB o2) {
                if (o1.total.compareTo(o2.total) !=  0) return - o1.total.compareTo(o2.total);
                else return o1.ten.compareTo(o2.ten);
            }
        });
        
        for (CLB x : list) {
            System.out.println(x);
        }
    }
}
