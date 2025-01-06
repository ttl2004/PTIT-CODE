//package com.proit4all.continue_code;

import java.util.*;
public class J05082_Danh_sach_khach_hang {
    static class KH{
        public String id, name, gTinh, diaChi;
        public Integer day, mon, year;

        public KH(String id, String name, String gTinh, String date, String diaChi) {
            this.id = id;
            this.name = name.trim();
            this.name = xuly();
            String [] tmp = date.trim().split("/");
            this.gTinh = gTinh;
            this.diaChi = diaChi;
            this.day = Integer.parseInt(tmp[0]);
            this.mon = Integer.parseInt(tmp[1]);
            this.year = Integer.parseInt(tmp[2]);
        }
        
        public String xuly() {
            String [] tmp = name.split("\\s+");
            
            for (int i = 0; i < tmp.length; i ++) {
                tmp[i] = tmp[i].substring(0, 1).toUpperCase() + tmp[i].substring(1).toLowerCase();
            }
            return String.join( " ", tmp);
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %s %s %02d/%02d/%04d", id, name, gTinh, diaChi, day, mon, year);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        sc.nextLine();
        
        List<KH> list = new ArrayList<>();
        
        for (int i = 1; i <= n; i ++) {
            String id = "KH" + String.format("%03d", i);
            list.add(new KH(id, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        
        Collections.sort(list, new Comparator<KH> (){
            @Override 
            public int compare(KH o1, KH o2) {
                if (o1.year.compareTo(o2.year) != 0) return o1.year.compareTo(o2.year);
                else if (o1.mon.compareTo(o2.mon) != 0) return o1.mon.compareTo(o2.mon);
                else return o1.day.compareTo(o2.day);
            }
        });
        
        for (KH x : list) {
            System.out.println(x);
        }
        
    }
}
