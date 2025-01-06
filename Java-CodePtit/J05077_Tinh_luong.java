
//package com.proit4all.continue_code;

import java.util.*;

public class J05077_Tinh_luong {
    static class PB{
        public String id, name;

        public PB(String id, String name) {
            this.id = id;
            this.name = name;
        }
        
    }
    static class NV{
        public String id, name, phongBan;
        public Long luongCB, ngayCong, luongThang;

        public NV(String id, String name, Long luongCB, Long ngayCong) {
            this.id = id;
            this.name = name;
            this.luongCB = luongCB;
            this.ngayCong = ngayCong;
            this.luongThang = Xuly_1();
        }
        
        public Long Xuly_1() {
            return luongCB * ngayCong * check() * 1000;
        }
        
        public Long check() {
            String f = id.substring(0, 1);
            int namCT = Integer.parseInt(id.substring(1, 3));
            
            if (f.equals("A")) {
               if (namCT < 4) return 10L;
               else if (namCT < 9) return 12L;
               else if (namCT < 16) return 14L;
               else  return 20L;                
            }
            else if (f.equals("B")) {
               if (namCT < 4) return 10L;
               else if (namCT < 9) return 11L;
               else if (namCT < 16) return 13L;
               else  return 26L;                
            }
            else if (f.equals("C")) {
               if (namCT < 4) return 9L;
               else if (namCT < 9) return 10L;
               else if (namCT < 16) return 12L;
               else  return 14L;                
            }
            else {
               if (namCT < 4) return 8L;
               else if (namCT < 9) return 9L;
               else if (namCT < 16) return 11L;
               else  return 13L;                
            }
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %s %d", id, name, phongBan, luongThang);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        Map<String, PB> mp1 = new TreeMap<>();
        int n = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < n; i ++) {
            String id = sc.next(), name = sc.nextLine();
            mp1.put(id, new PB(id, name));
        }
        
        int m = sc.nextInt();       
        for (int i = 0; i < m; i ++) {
            sc.nextLine();
            NV x = new NV(sc.nextLine(), sc.nextLine(), sc.nextLong(), sc.nextLong());
            x.phongBan = mp1.get(x.id.substring(3)).name;
            System.out.println(x);
        }
    }
}
