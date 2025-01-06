
//package com.proit4all.continue_code;

import java.util.*;

public class J05062_Hoc_bong_sinh_vien {
    static class SV{
        public String name, loaiHB;
        public Double tbc;
        public int rl, stt;

        public SV(int stt, String name, double tbc, int rl) {
            this.stt = stt;
            this.name = name;
            this.tbc = tbc;
            this.rl = rl;
            check();
        }
        
        public void check() {
            if (tbc >= 3.6 && rl >= 90) loaiHB = "XUATSAC";
            else if (tbc >= 3.2 && rl >= 80) loaiHB = "GIOI";
            else if (tbc >= 2.5 && rl >= 70) loaiHB = "KHA";
            else loaiHB = "KHONG";
        }
        
        @Override
        public String toString() {
            return String.format("%s: %s", name, loaiHB);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n =sc.nextInt(), m = sc.nextInt();
        List<SV> list = new ArrayList<>();
        
        for (int  i = 0; i < n; i ++) {
            sc.nextLine();
            list.add(new SV(i,sc.nextLine(), sc.nextDouble(), sc.nextInt()));
        }
        List<SV> tmp = new ArrayList<>(list);
        
        tmp.sort(((SV o1, SV o2) -> {
            if (o1.tbc.equals(o2.tbc) == false) return o2.tbc.compareTo(o1.tbc);
            else return o2.rl - o1.rl;
        }));
        
        int cnt = m;
        while (cnt < n) {
            if (tmp.get(cnt).tbc.compareTo(tmp.get(cnt - 1).tbc) == 0) cnt++;
            else break;
        }
        
        while (cnt < n) {
            tmp.get(cnt).loaiHB = "KHONG";
            cnt ++;
        }
        
        for (SV x : list) {
            System.out.println(x);
        }
    }
}
