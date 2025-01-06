
//package com.proit4all.continue_code;
import java.util.*;
public class J05073_Tinh_toan_gia_ban {
    static class MH{
        public String id;
        public int donGia, soLuong, total;
        public double ans, thue, phiVC;
        public MH(String id, int donGia, int soLuong) {
            this.id = id;
            this.donGia = donGia;
            this.soLuong = soLuong;
            this.total = donGia * soLuong;
            this.thue = total * Xuly_1("" + id.charAt(0)) * (id.charAt(id.length() - 1) == 'C' ? 0.95 : 1.0);
            this.phiVC = total * Xuly_2("" + id.charAt(0));
            this.ans = (total * 1.0 + thue + phiVC) * 1.2 / soLuong;
        }
        
        public double Xuly_1(String s) {
            if (s.equals("T")) return 0.29;
            else if (s.equals("C")) return 0.1;
            else if (s.equals("D")) return 0.08;
            else return 0.02;
        }
        
        public double Xuly_2(String s) {
            if (s.equals("T")) return 0.04;
            else if (s.equals("C")) return 0.03;
            else if (s.equals("D")) return 0.025;
            else return 0.005;
        }
        
        @Override
        public String toString() {
            return id + " " + String.format("%.2f", ans);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        for (int i = 0; i < n; i ++) {
            System.out.println(new MH(sc.next(), sc.nextInt(), sc.nextInt()));
        }
    }
}
