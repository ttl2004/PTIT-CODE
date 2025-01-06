//package com.proit4all.continue_code;

import java.util.*;

public class J05054_Xep_hang_hoc_sinh {
    static class HocSinh{
        public String id, name, type;
        public Integer rank;
        public Double score;

        public HocSinh(String id, String name, Double score) {
            this.id = id;
            this.name = name;
            this.score = score;
            this.type = xuly_1();
        }
        
        public String xuly_1() {
            if (score < 5) return "Yeu";
            else if (score >= 5 && score < 7) return "Trung Binh";
            else if (score >= 7 && score < 9) return "Kha";
            else return "Gioi";
        }
        
        @Override 
        public String toString() {
            return String.format("%s %s %.1f %s %d", id, name, score, type, rank);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<HocSinh> list = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            sc.nextLine();
            String id = "HS" + (i < 10 ? "0" : "") + i;
            list.add(new HocSinh(id, sc.nextLine().trim(), sc.nextDouble()));
        }
        list.sort((( o1, o2) -> o2.score.compareTo(o1.score)));
        
        int rank = 1, cnt = 0;
        for (int i = 0; i < n; i ++) {
            if (i == 0) {
                list.get(i).rank = rank;
            }
            else if (list.get(i).score.compareTo(list.get(i - 1).score) == 0) {
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
        
        list.sort((( o1, o2) -> o1.id.compareTo(o2.id)));
        
        for (HocSinh x : list) {
            System.out.println(x);
        }
    }
}