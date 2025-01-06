
//package com.proit4all.continue_code;

import java.util.*;

public class J05074_Diem_danh_1 {
    static class HS{
        public String id, name, Class, note;
        public Integer Diem;

        public HS(String id, String name, String Class) {
            this.id = id;
            this.name = name;
            this.Class = Class;
            this.Diem = 10;
            this.note = "";
        }
        
        public Integer Xuly_1(String s) {
            int len = s.length();
            for (int i = 0; i < len; i ++) {
                if (s.charAt(i) == 'm') this.Diem --;
                else if (s.charAt(i) == 'v') this.Diem -= 2;
            }
            if (this.Diem <= 0) {
                this.Diem = 0;
                this.note = "KDDK";
            }
            return Diem;
        }
        
        @Override
        public String toString() {
            if (note.equals("") != true) {
                return String.format("%s %s %s %d %s", id, name, Class, Diem, note);
            }
            else return String.format("%s %s %s %d", id, name, Class, Diem);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        Map<String, HS> mp = new TreeMap<>();
        List<HS> list = new ArrayList<>();
        sc.nextLine();
        for (int i = 1; i <= n; i ++) {
            String id = sc.nextLine().trim();
            mp.put(id, new HS(id, sc.nextLine(), sc.nextLine()));
            list.add(mp.get(id));
        }
        
        for (int i = 1; i <= n; i ++) {
            String id = sc.next(), dd = sc.next();
            mp.get(id).Xuly_1(dd);
        }
        
        for (HS x : list) {
            System.out.println(x);
        }
    }
}
