
//package com.proit4all.continue_code;
import java.util.*;

public class J05014_Tuyen_giao_vien {
    static  class GV{
        public String id, name, mon, type;
        public Double diemTH, diemCM, total;

        public GV(String id, String name, String khoi, Double diemTH, Double diemCM) {
            this.id = id;
            this.name = name;
            this.mon = Xuly_1(khoi);
            this.diemTH = diemTH;
            this.diemCM = diemCM;
            this.total = diemTH * 2 + diemCM + check(khoi);
            this.type = (total.compareTo(18.0) < 0 ? "LOAI" : "TRUNG TUYEN");
        }
        
        public String Xuly_1(String s) {
            String f = s.substring(0, 1);
            if (f.equals("A")) return "TOAN";
            else if (f.equals("B")) return "LY";
            else return  "HOA";
        }
        
        public double check(String s) {
            int f = Integer.parseInt(s.substring(1));
            if (f == 1) return 2.0;
            else if (f == 2) return 1.5;
            else if (f == 3) return 1.0;
            else return 0.0;
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %s %.1f %s", id, name, mon, total, type);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        List<GV> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            list.add(new GV("GV" + String.format("%02d", i), sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble()));
            
        }
        Collections.sort( list, new Comparator<GV> (){
            @Override
            public  int compare(GV o1, GV o2) {
                if (o1.total.compareTo(o2.total) != 0) return -o1.total.compareTo(o2.total);
                else return o1.id.compareTo(o2.id);
            }
        });
        for (GV x : list) {
            System.out.println(x);
        }
    }
}
