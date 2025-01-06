//package com.proit4all.continue_code;
import java.util.*;
import java.io.*;
public class J07038_Danh_sach_thuc_tap_3 {
    static Map<String, SinhVien> mp1 = new TreeMap<>();
    static Map<String, CongTy> mp2 = new TreeMap<>();
    
    static class SinhVien{
        public String msv, name, Class, mail;

        public SinhVien(String msv, String name, String Class, String mail) {
            this.msv = msv;
            this.name = chuanhoa(name);
            this.Class = Class;
            this.mail = mail;
        }
        
        public String chuanhoa(String s) {
            String []tmp = s.trim().split("\\s+");
            StringJoiner kq = new StringJoiner(" ");
            for (String x : tmp) {
                x = x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase();
                kq.add(x);
            }
            return kq.toString();
        }
    }
    static class CongTy{
        public String id, name;
        public Integer slg;

        public CongTy(String id, String name, Integer slg) {
            this.id = id;
            this.name = name;
            this.slg = slg;
        }
        
    }
    
    static class ThucTap{
        public String msv, id;

        public ThucTap(String msv, String id) {
            this.msv = msv;
            this.id = id;
        }
        
        @Override
        public String toString(){
            return msv + " " + mp1.get(msv).name + " " + mp1.get(msv).Class;
        }
    }
    
    public static void main(String[] args) throws IOException{
        ArrayList<SinhVien> sv = new ArrayList<>();
        ArrayList<CongTy> ct = new ArrayList<>();
        ArrayList<ThucTap> tt = new ArrayList<>();
        
        //BufferedReader br = new BufferedReader(new FileReader("E://Code_Ptit//Java - codeptit//Java_test//continue_code//src//main//java//com//proit4all//continue_code//in_1.txt"));
        BufferedReader br = new BufferedReader(new FileReader("SINHVIEN.in"));

        int n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i ++) {
            String msv = br.readLine(), name = br.readLine(), Class = br.readLine(), mail = br.readLine();
            SinhVien tmp = new SinhVien(msv, name, Class, mail);
            sv.add(tmp);
            mp1.put(msv, tmp);
        }
        
        //br = new BufferedReader(new FileReader("E://Code_Ptit//Java - codeptit//Java_test//continue_code//src//main//java//com//proit4all//continue_code//in_2.txt"));
        br = new BufferedReader(new FileReader("DN.in"));

        int m = Integer.parseInt(br.readLine());
        for (int i = 0; i < m; i ++) {
            CongTy tmp = new CongTy(br.readLine(), br.readLine(), Integer.parseInt(br.readLine()));
            ct.add(tmp);
            mp2.put(tmp.id, tmp);
        }
      
        //br = new BufferedReader(new FileReader("E://Code_Ptit//Java - codeptit//Java_test//continue_code//src//main//java//com//proit4all//continue_code//in_3.txt"));
        br = new BufferedReader(new FileReader("THUCTAP.in"));
        int k = Integer.parseInt(br.readLine());
        for (int i = 0; i < k; i ++) {
            String [] s = br.readLine().trim().split("\\s+");
            ThucTap tmp = new ThucTap(s[0], s[1]);
            tt.add(tmp);
        }
        
        Collections.sort(tt, new Comparator<ThucTap> (){
            @Override
            public int compare(ThucTap o1, ThucTap o2) {
                return o1.msv.compareTo(o2.msv);
            }
        });
        
        int q = Integer.parseInt(br.readLine());
        for (int i = 0; i < q; i ++) {
            String s = br.readLine();
            System.out.println("DANH SACH THUC TAP TAI " + mp2.get(s).name + ":");
            int cnt = 1, f = mp2.get(s).slg;
            for (ThucTap x : tt) {
                if (cnt > f) break;
                if (x.id.equals(s) == true) {
                    System.out.println(x);
                    cnt ++;
                }
            }
        }
    }
}
