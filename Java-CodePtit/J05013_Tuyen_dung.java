
//package com.proit4all.continue_code;
import java.util.*;

public class J05013_Tuyen_dung {
    static class TS{
        public String id, name, type;
        public Double diemLt, diemTH, avg;

        public TS(String id, String name, String diemLt, String diemTH) {
            this.id = id;
            this.name = name;
            this.diemLt = xuly_1(diemLt);
            this.diemTH = xuly_1(diemTH);
            this.avg = (this.diemLt + this.diemTH) / 2;
            avg = (avg.compareTo(10.0) > 0 ? 10.0 : avg);
            this.type = xuly_2();
        }
        
        public Double xuly_1(String s) {
            try{
                int f = Integer.parseInt(s);
                return (f == 10 ? 10.0 : ((f < 10) ? f * 1.0 : f / 10.0));
            }catch(Exception e) {
                return Double.parseDouble(s);
            }
        }
        
        public String xuly_2() {
            if (avg.compareTo(5.0) < 0) return "TRUOT";
            else if (avg.compareTo(8.0) < 0) return "CAN NHAC";
            else if (avg.compareTo(9.5) < 0) return "DAT";
            else return "XUAT SAC";
        }
        @Override 
        public String toString() {
            return String.format("%s %s %.2f %s", id, name, avg, type);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n =sc.nextInt();
        List<TS> list = new ArrayList<>();
        sc.nextLine();
        for (int i = 1; i <= n; i ++) {
            String id = "TS" + String.format("%02d", i);
            list.add(new TS(id, sc.nextLine(), sc.nextLine().trim(), sc.nextLine().trim()));
        }
        list.sort((( o1, o2) -> o2.avg.compareTo(o1.avg)));
        for (TS x : list) {
            System.out.println(x);
        }
    }
}
