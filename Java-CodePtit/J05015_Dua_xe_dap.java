
//package com.proit4all.continue_code;

import java.util.*;

public class J05015_Dua_xe_dap {
    static class VDV{
        public String id, name,diaChi;
        public Integer h, mm, vtoc;

        public VDV(String name, String diaChi, String time) {
            this.name = name;
            this.diaChi = diaChi;
            String [] tmp = time.trim().split(":");
            this.h = Integer.parseInt(tmp[0]);
            this.mm = Integer.parseInt(tmp[1]);
            this.id = xuly_1();
            this.vtoc = xuly_2();
        }
        
        public String xuly_1(){
            String [] a = name.trim().split("\\s+");
            String [] b = diaChi.trim().split("\\s+");
            String ans = "";
            for (String x : b) {
                ans += x.charAt(0);
            }
            for (String x : a) {
                ans += x.charAt(0);
            }
            return ans;
        }
        public Integer xuly_2() {
            double gio = h - 6 + mm / 60.0;
            return (int) Math.round(120 / gio);
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %s %d Km/h", id, name, diaChi, vtoc);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<VDV> list = new ArrayList<>();
        sc.nextLine();
        for (int i = 0 ; i < n; i ++) {
            list.add(new VDV(sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(list, new Comparator<VDV>() {
            @Override
            public int compare(VDV o1, VDV o2) {
                if (o1.h.compareTo(o2.h) != 0) return o1.h.compareTo(o2.h);
                else return o1.mm.compareTo(o2.mm);
            }
        });
        for (VDV x : list) {
            System.out.println(x);
        }
    }
}
