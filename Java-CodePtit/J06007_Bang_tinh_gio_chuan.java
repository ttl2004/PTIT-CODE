
//package com.proit4all.continue_code;

import java.util.*;
public class J06007_Bang_tinh_gio_chuan {
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
        public double total;

        public GV(String id, String name) {
            this.id = id;
            this.name = name.trim();
            this.list = new ArrayList<>();
            this.total = 0.0;
        }
        
        public void Xuly() {
            for (TT x : list) {
                total += x.time;
            }
        }
        @Override
        public String toString() {
            return name + " " + String.format("%.2f", total);
        }
        
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        Map<String, MH> mp_1 = new TreeMap<>();
        Map<String, GV> mp_2 = new TreeMap<>();
        List<GV> list = new ArrayList<>();
        
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
            GV tmp = new GV(id, sc.nextLine());
            mp_2.put(id, tmp);
            list.add(tmp);
        }
        
        int k =sc.nextInt();
        for (int i = 0; i < k; i ++) {
            String idGV = sc.next(), idMH = sc.next();
            double soGio = sc.nextDouble();
            mp_2.get(idGV).list.add(new TT(idMH, mp_1.get(idMH).name, soGio));
        }
        
        for (GV x : list){
            x.Xuly();
            System.out.println(x);
        }
    }
}
