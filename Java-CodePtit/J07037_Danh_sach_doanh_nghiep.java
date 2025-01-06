
//package com.proit4all.continue_code;

import java.util.*;
import java.io.*;
public class J07037_Danh_sach_doanh_nghiep {
    static class DN{
        public String id, name;
        public Integer slg;

        public DN(String id, String name, Integer slg) {
            this.id = id;
            this.name = name;
            this.slg = slg;
        }
        
        @Override
        public String toString() {
            return id + " " + name + " " + slg;
        }
    }
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DN.in"));
        int n =sc.nextInt();
        List<DN> list = new ArrayList<>();
        for (int i = 0; i < n; i ++) {
            sc.nextLine();
            list.add(new DN(sc.nextLine().trim(), sc.nextLine().trim(), sc.nextInt()));
        }
        list.sort(((o1, o2) -> o1.id.compareTo(o2.id)));
        
        for (DN x : list) {
            System.out.println(x);
        }
    }
}
