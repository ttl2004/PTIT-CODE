
//package com.proit4all.continue_code;

import java.util.*;
import java.math.*;
public class J05057_Bang_diem_tuyen_sinh {
    static class HocSinh{
        public String id, name, type;
        public double toan, ly, hoa, uuTien, total;

        public HocSinh(String id, String name, Double toan, Double ly, Double hoa) {
            this.id = id;
            this.name = name;
            this.toan = toan;
            this.ly = ly;
            this.hoa= hoa;
            this.uuTien = check();
            this.total = toan * 2.0 + ly + hoa;
            double kq = total + uuTien;
            this.type = (kq >= 24 ? "TRUNG TUYEN" : "TRUOT");
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
        
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            System.out.println(new HocSinh(sc.nextLine().trim(), sc.nextLine().trim(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble()));
        }
    }
}
