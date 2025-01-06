
//package com.proit4all.continue_code;

import java.util.*;
public class J05065_Liet_ke_nhan_vien_theo_nhom {
    static class NV{
        public String id, name, chucVu, soHieu, hsLuong;
        public int hs;

        public NV(String id, String name) {
            this.id = id;
            this.name = name;
            this.chucVu = id.substring(0, 2);
            this.soHieu = id.substring(4);
            this.hsLuong = id.substring(2, 4);
            this.hs = Integer.parseInt(hsLuong);
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %s %s", name, chucVu, soHieu, hsLuong);
        }
    }
    
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        List<NV> list = new ArrayList<>();
        sc.nextLine();
        int gd = 0, tp = 0, pp = 0;
        for (int i = 0; i < n; i ++) {
            String id = sc.next(), name = sc.nextLine().trim();
            String chucVu = id.substring(0, 2);
            NV x = new NV(id, name);
            
            if (chucVu.equals("GD")) {
                if (gd < 1) {
                    gd ++;
                }
                else x.chucVu = "NV";
            }
            else if (chucVu.equals("TP")) {
                if (tp < 3) {
                    tp ++;
                }
                else x.chucVu = "NV";
            }
            else if (chucVu.equals("PP")) {
                if (pp < 3) {
                    pp ++;
                }
                else x.chucVu = "NV";
            }
            list.add(x);
        }
        
        list.sort(((NV o1, NV o2) -> {
            if (o1.hs == o2.hs) return o1.soHieu.compareTo(o2.soHieu);
            else return o2.hs - o1.hs;
        }));
        
        int q = sc.nextInt();
        for (int i = 0; i < q; i++) {
            String chucVu = sc.next();
            for (NV x : list) {
                if (x.chucVu.equals(chucVu)) System.out.println(x);
            }
            System.out.println("");
        }
    }
}
