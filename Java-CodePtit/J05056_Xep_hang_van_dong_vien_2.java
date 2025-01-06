
//package com.proit4all.continue_code;

import java.util.*;
public class J05056_Xep_hang_van_dong_vien_2 {
     static class VDVien{
        public String id, name, date, beginTime, endTime;
        public Integer uuTien, tcThucTe, tcXepHang, rank;

        public VDVien(String id, String name, String date, String beginTime, String endTime) {
            this.id= id;
            this.name = name;
            this.date = date;
            this.beginTime = beginTime;
            this.endTime = endTime;
            this.tcThucTe = xuly_2(endTime) - xuly_2(beginTime);
            this.uuTien = check(date);
            this.tcXepHang = tcThucTe - uuTien;
        }
        public String xuly_1(Integer time) {
            int h = time / 3600, mm = (time % 3600) / 60, ss = time % 60;
            return String.format("%02d:%02d:%02d", h, mm, ss);
        }
        
        public Integer xuly_2(String time) {
            String [] tmp = time.split(":");
            return (Integer.parseInt(tmp[0]) * 3600) + (Integer.parseInt(tmp[1]) * 60) + Integer.parseInt(tmp[2]);
        }
        
        public Integer check(String date) {
            Integer age = 2021 - Integer.parseInt(date.substring(6));
            if (age < 18) return 0;
            else if (age < 25) return 1;
            else if  (age < 32) return 2;
            else return 3;
        }
        
        @Override
        public String toString() {
            return String.format("%s %s %s %s %s %d", id, name, xuly_1(tcThucTe), xuly_1(uuTien), xuly_1(tcXepHang), rank);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<VDVien> list = new ArrayList<>();
        sc.nextLine();
        for (int i = 1; i <= n; i ++) {
            String id = "VDV" + (i < 10 ? "0" : "") + i;
            list.add(new VDVien(id, sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim()));
        }
        
        list.sort(((o1, o2) -> o1.tcXepHang.compareTo(o2.tcXepHang)));
        
        int rank = 1, cnt = 0;
        for (int i = 0; i < n; i ++) {
            if (i == 0) {
                list.get(i).rank = rank;
            }
            else if (list.get(i).tcXepHang.compareTo(list.get(i - 1).tcXepHang) == 0) {
                cnt ++;
                list.get(i).rank = rank;
            }
            else {
                rank ++;
                list.get(i).rank = rank + cnt;
                rank += cnt; 
                cnt = 0;
            }
        }
        
        for (VDVien x : list) {
            System.out.println(x);
        }
    }
}
