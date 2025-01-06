
//package com.proit4all.continue_code;

import java.util.*;
public class J05079_Lop_hoc_phan_1 {
    static class MH{
        public String id, name;

        public MH(String id, String name) {
            this.id = id;
            this.name = name;
        }
    }
    static class SV{
        public String maMon, tenMon, nhomLop, tenGV;
        public Integer idLop;

        public SV(String maMon, String tenMon, String nhomLop, String tenGV) {
            this.maMon = maMon.trim();
            this.tenMon = tenMon;
            this.nhomLop = nhomLop;
            this.tenGV = tenGV;
            this.idLop = Integer.parseInt(nhomLop);
        }

        
        @Override
        public String toString() {
            return String.format("%s %s", nhomLop, tenGV);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        Map<String, MH> mp = new TreeMap<>();
        int n = sc.nextInt();
        sc.nextLine();
        List<SV> list = new ArrayList<>();
        for (int i = 0; i < n; i ++) {
            SV tmp = new SV(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            list.add(tmp);
            mp.put(tmp.maMon, new MH(tmp.maMon, tmp.tenMon));
        }
        
        list.sort((o1, o2) -> o1.idLop.compareTo(o2.idLop));
        
        int q = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < q; i ++) {
            String s = sc.nextLine().trim();
            System.out.println("Danh sach nhom lop mon " + mp.get(s).name + ":");
            
            for (SV x : list) {
                if (s.equals(x.maMon)) System.out.println(x);
            }
        }
    }
}
 