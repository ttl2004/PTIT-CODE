//package com.proit4all.continue_code;

import java.util.*;
import java.math.*;
import java.io.*;
import java.time.*;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
public class J05016_Hoa_don_khach_san {
    
    static class KhachHang{
        public String id, name, idPhong, inDate, outDate;
        public Integer money, days, total;

        public KhachHang(String id, String name, String idPhong, String inDate, String outDate, int money) {
            this.id = id;
            this.name = name;
            this.idPhong = idPhong;
            this.inDate = inDate;
            this.outDate = outDate;
            this.money = money;
            this.days = XulyDate();
            this.total = ThanhTien();
        }
        
        public int checkTang(String s) {
            int x = Integer.parseInt(s.substring(0, 1));
            if (x == 1) return 25;
            else if (x == 2) return 34;
            else if (x == 3) return 50;
            else return 80;
        }
        
        public int XulyDate() {
            DateTimeFormatter f = DateTimeFormatter.ofPattern("dd/MM/yyyy");
            
            LocalDate in = LocalDate.parse(inDate, f);
            LocalDate out = LocalDate.parse(outDate, f);
            
            return (int)ChronoUnit.DAYS.between(in, out) + 1;
        }
        
        public int ThanhTien(){
            return (checkTang(idPhong) * XulyDate()) + money;
        }
        
        @Override
        public String toString() {
            return id + " " + name + " " + idPhong + " " + days + " " + total;
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<KhachHang> list = new ArrayList<>();
        
        int n = sc.nextInt();
        sc.nextLine();
        for (int i = 1; i <= n; i ++) {
            
            String id = "KH" + (i < 10 ? "0" : "") + i;
            String name = sc.nextLine().trim(), idPhong = sc.nextLine().trim(), inDate = sc.nextLine().trim(), outDate = sc.nextLine().trim();
            int money = sc.nextInt();
            sc.nextLine();
            list.add(new KhachHang(id, name, idPhong, inDate, outDate, money));
        }
        
        Collections.sort(list, new Comparator<KhachHang>(){
            @Override
            public int compare(KhachHang o1, KhachHang o2) {
                return - o1.total.compareTo(o2.total);
            }
        });
        
        for (KhachHang x : list) {
            System.out.println(x);
        }
    }
}
