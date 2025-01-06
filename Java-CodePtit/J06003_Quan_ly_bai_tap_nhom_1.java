
//package com.proit4all.continue_code;
import java.util.*;

public class J06003_Quan_ly_bai_tap_nhom_1 {
    static class BTN{
        public String name;
        public Integer id;

        public BTN(String name, Integer id) {
            this.name = name;
            this.id = id;
        }
        
        
    }
    
    static class SV{
        public String msv, name, sdt;
        public Integer groupID;

        public SV(String msv, String name, String sdt, Integer groupID) {
            this.msv = msv;
            this.name = name;
            this.sdt = sdt;
            this.groupID = groupID;
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %s", msv, name, sdt);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt(), m = sc.nextInt();
        
        List<SV> list = new ArrayList<>();
        for (int i = 0; i < n; i ++) {
            sc.nextLine();
            list.add(new SV(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextInt()));
        }
        
        Map<Integer, BTN> mp = new TreeMap<>();
        sc.nextLine();
        for (int i = 1; i <= m; i ++) {
            mp.put(i, new BTN(sc.nextLine(), i));
        }
        
        int  q = sc.nextInt();
        for (int i = 0; i < q; i ++) {
            int id = sc.nextInt();
            System.out.println("DANH SACH NHOM " + id + ":");
            for (SV x : list) {
                if (x.groupID.compareTo(id) == 0){
                    System.out.println(x);
                }
            }
            System.out.println("Bai tap dang ky: " + mp.get(id).name);
        }
    }
    
}

