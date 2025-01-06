
//package com.proit4all.continue_code;

import java.util.*;

public class J05080_Lop_hoc_phan_2 {
    static class SV{
        public String maMon, tenMon, nhomLop, tenGV;
        public Integer idLop;

        public SV(String maMon, String tenMon, String nhomLop, String tenGV) {
            this.maMon = maMon.trim();
            this.tenMon = tenMon;
            this.nhomLop = nhomLop;
            this.tenGV = tenGV.trim();
            this.idLop = Integer.parseInt(nhomLop);
        }

        
        @Override
        public String toString() {
            return String.format("%s %s %s", maMon, tenMon, nhomLop);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        sc.nextLine();
        List<SV> list = new ArrayList<>();
        for (int i = 0; i < n; i ++) {
            SV tmp = new SV(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            list.add(tmp);
        }
        
        Collections.sort(list, new Comparator<SV> (){
            @Override
            public int compare(SV o1, SV o2) {
                if (o1.maMon.equals(o2.maMon) == false) return o1.maMon.compareTo(o2.maMon);
                else return o1.idLop.compareTo(o2.idLop);
            }
        });
        
        int q = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < q; i ++) {
            String s = sc.nextLine().trim();
            System.out.println("Danh sach cho giang vien " + s + ":");
            
            for (SV x : list) {
                if (s.equals(x.tenGV)) System.out.println(x);
            }
        }
    }
}
