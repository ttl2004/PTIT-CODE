
//package com.proit4all.continue_code;
import java.util.*;
public class J05060_Ket_qua_xet_tuyen {
    static class ThiSinh{
        public String id, name, date, type;
        public double diemLT, diemTH, diemTB;
        public int age;

        public ThiSinh(String id, String name, String date, Double diemLT, Double diemTH) {
            this.id =id;
            this.name = name;
            this.date = date;
            this.diemLT = diemLT;
            this.diemTH = diemTH;
            this.age = 2021 - Integer.parseInt(date.substring(6));
            this.diemTB = Math.round((diemLT + diemTH) / 2 + check());
            diemTB = (diemTB > 10 ? 10 : diemTB);
            this.type = check_1();
        }
        
        public Double check() {
            if (diemLT >= 8 && diemTH > 8) return 1.0;
            else if (diemLT >= 7.5 && diemTH >= 7.5) return 0.5;
            else return 0.0;
        }
        public String check_1() {
            if (diemTB < 5) return "Truot";
            else if (diemTB <= 6) return "Trung binh";
            else if (diemTB < 8) return "Kha";
            else if (diemTB < 9) return "Gioi";
            else return "Xuat sac";
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %d %d %s", id, name, age, (int)diemTB, type);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            String id = "PH" + (i < 10 ? "0" : "") + i;
            System.out.println(new ThiSinh(id, sc.nextLine().trim(), sc.nextLine().trim(), sc.nextDouble(), sc.nextDouble()));
        }
    }
}
