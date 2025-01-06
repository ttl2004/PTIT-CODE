
//package com.proit4all.continue_code;
import java.util.*;

public class J06008_Tinh_gio_chuan_cho_tung_giang_vien {
    static class MH{
        public String id, name;

        public MH(String id, String name) {
            this.id = id;
            this.name = name.trim();
        }
        
    }
    
    static class TT{
        public String id, name;
        public Double time;

        public TT(String id, String name, Double time) {
            this.id = id;
            this.name = name.trim();
            this.time =time;
        }
        
        @Override
        public String toString() {
            return name + " " + time;
        }
    }
    static  class GV{
        public String id, name;
        public List<TT> list;

        public GV(String id, String name) {
            this.id = id;
            this.name = name.trim();
            this.list = new ArrayList<>();

        }
        
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        Map<String, MH> mp_1 = new TreeMap<>();
        Map<String, GV> mp_2 = new TreeMap<>();
        
        int n = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < n; i ++) {
            String id = sc.next();
            mp_1.put(id, new MH(id, sc.nextLine()));
        }
        
        int m = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < m; i ++) {
            String id = sc.next();
            mp_2.put(id, new GV(id, sc.nextLine()));
        }
        
        int k =sc.nextInt();
        for (int i = 0; i < k; i ++) {
            String idGV = sc.next(), idMH = sc.next();
            double soGio = sc.nextDouble();
            mp_2.get(idGV).list.add(new TT(idMH, mp_1.get(idMH).name, soGio));
        }
        String idGV = sc.next();
        double total = 0.0;
        System.out.println("Giang vien: " + mp_2.get(idGV).name);
        for (TT x : mp_2.get(idGV).list) {
            System.out.println(x);
            total += x.time;
        }
        System.out.printf("Tong: %.2f", total);
    }
}
