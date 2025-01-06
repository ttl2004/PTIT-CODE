
//package com.proit4all.continue_code;
import java.util.*;
public class J05061_Sap_xep_ket_qua_xet_tuyen {
     static class ThiSinh{
        public String id, name, date, type;
        public double diemLT, diemTH, diemTB;
        public Double mark;
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
            this.mark = diemTB;
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
        List<ThiSinh> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            String id = "PH" + (i < 10 ? "0" : "") + i;
            list.add(new ThiSinh(id, sc.nextLine().trim(), sc.nextLine().trim(), sc.nextDouble(), sc.nextDouble()));
        }
        
        Collections.sort(list, new Comparator<ThiSinh> () {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                if (o1.diemTB != o2.diemTB) return - o1.mark.compareTo(o2.mark);
                else return o1.id.compareTo(o2.id);
            }
        });
        
        for (ThiSinh x : list) {
            System.out.println(x);
        }
    }
}
