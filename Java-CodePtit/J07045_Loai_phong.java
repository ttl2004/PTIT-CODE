
//package com.proit4all.continue_code;

import java.util.*;
import java.io.*;

public class J07045_Loai_phong {
    static class LoaiPhong implements Comparable<LoaiPhong>{
        public String id, name;
        public Integer donGia;
        public Double phiDV;

        public LoaiPhong(String s) {
            String [] tmp = s.trim().split("\\s+");
            this.id = tmp[0];
            this.name = tmp[1];
            this.donGia = Integer.parseInt(tmp[2]);
            this.phiDV = Double.parseDouble(tmp[3]);
        }
        public int compareTo(LoaiPhong p) {
            return this.name.compareTo(p.name);
        }
        @Override
        public String toString() {
            return id + " " + name + " " + donGia + " " + phiDV;
        }
    }
    public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
}
