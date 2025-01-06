
//package com.proit4all.continue_code;
import java.util.*;
public class J05059_Xac_dinh_danh_sach_trung_tuyen {
    static class TS{
        public String id, name, type;
        public double toan, ly, hoa, uuTien, total;
        public Double diemTong;

        public TS(String id, String name,double toan, double ly, double hoa) {
            this.id = id;
            this.name = name;
            this.toan = toan;
            this.ly = ly;
            this.hoa = hoa;
            this.uuTien = Xuly_1();
            this.total = toan * 2.0 + ly + hoa + uuTien;
            this.diemTong = total;
        }
        
        public Double Xuly_1() {
            String s = id.substring(0, 3);
            if (s.equals("KV1")) return 0.5;
            else if (s.equals("KV2")) return 1.0;
            else return 2.5;
        }
        
        public String check(double score) {
            if (total >= score) return "TRUNG TUYEN";
            else return "TRUOT";
        }
        
        @Override
        public String toString() {
            if (total == (int) total){
                if (uuTien == (int) uuTien) 
                    return String.format("%s %s %d %d %s", id, name, (int)uuTien, (int)total, type);
                else 
                    return String.format("%s %s %.1f %d %s", id, name, uuTien, (int)total, type);
            }
            else {
                 if (uuTien == (int) uuTien) 
                    return String.format("%s %s %d %.1f %s", id, name, (int)uuTien, total, type);
                else 
                    return String.format("%s %s %.1f %.1f %s", id, name, uuTien, total, type);
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<TS> list = new ArrayList<>();
        for (int i = 0; i < n; i ++) {
            sc.nextLine();
            list.add(new TS(sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble()));
        }
        
        int m = sc.nextInt();
        Collections.sort(list, new Comparator<TS>(){
            @Override
            public int compare(TS o1, TS o2) {
                if (o1.diemTong.equals(o2.diemTong) == false) return o2.diemTong.compareTo(o1.diemTong);
                else return o1.id.compareTo(o2.id);
            }
        });
        
        double diemChuan = list.get(m - 1).diemTong;
        
        System.out.println(diemChuan);
        
        for (TS x : list) {
            x.type = x.check(diemChuan);
            System.out.println(x);
        }

    }
}
