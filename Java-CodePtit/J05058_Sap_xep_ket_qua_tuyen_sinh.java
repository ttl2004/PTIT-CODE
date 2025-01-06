
//package com.proit4all.continue_code;

import java.util.*;
import java.math.*;
public class J05058_Sap_xep_ket_qua_tuyen_sinh {
    static class HocSinh{
        public String id, name, type;
        public double toan, ly, hoa, uuTien, total;
        public Double kq;

        public HocSinh(String id, String name, Double toan, Double ly, Double hoa) {
            this.id = id;
            this.name = name;
            this.toan = toan;
            this.ly = ly;
            this.hoa= hoa;
            this.uuTien = check();
            this.total = toan * 2.0 + ly + hoa + uuTien;
            this.kq = total;
            this.type = (total >= 24 ? "TRUNG TUYEN" : "TRUOT");
        }
        
        public double check() {
            String f = id.substring(0, 3);
            if (f.equals("KV1")) return 0.5;
            else if (f.equals("KV2")) return 1.0;
            else return 2.5;
        }
        
        @Override
        public String toString() {
            if (total == (int) total) {
                if (uuTien == (int) uuTien) return String.format("%s %s %d %d %s", id, name, (int)uuTien, (int)total, type);
                else return String.format("%s %s %.1f %d %s", id, name, uuTien, (int)total, type);
                
            }
            else {
                if (uuTien == (int) uuTien) return String.format("%s %s %d %.1f %s", id, name, (int)uuTien, total, type);
                else return String.format("%s %s %.1f %.1f %s", id, name, uuTien, total, type);
                
            }
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<HocSinh> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            list.add(new HocSinh(sc.nextLine().trim(), sc.nextLine().trim(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble()));
        }
        
        Collections.sort(list, new Comparator<HocSinh> () {
            @Override
            public int compare(HocSinh o1, HocSinh o2) {
                if (o1.total != o2.total) return o2.kq.compareTo(o1.kq);
                else return o1.id.compareTo(o2.id);
            }
        });
        
        for (HocSinh x : list) {
            System.out.println(x);
        }
    }
}
