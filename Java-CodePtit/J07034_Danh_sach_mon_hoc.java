
//package com.proit4all.continue_code;

import java.util.*;
import java.io.*;
public class J07034_Danh_sach_mon_hoc {
    static class MH{
        public String id, name;
        public int tinChi;

        public MH(String id, String name, int tinChi) {
            this.id = id;
            this.name = name;
            this.tinChi = tinChi;
        }
        
        @Override
        public String toString() {
            return id + " " + name + " " + tinChi;
        }
    }
    public static void main(String[] args) {
        try{
            Scanner sc = new Scanner(new File("MONHOC.in"));
            int n =sc.nextInt();
            List<MH> list = new ArrayList<>();
            for (int i = 0; i < n; i ++) {
                sc.nextLine();
                list.add(new MH(sc.nextLine(), sc.nextLine().trim(), sc.nextInt()));
            }
            list.sort(((o1, o2) -> o1.name.compareTo(o2.name)));
            for (MH x : list) {
                System.out.println(x);
            }
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
