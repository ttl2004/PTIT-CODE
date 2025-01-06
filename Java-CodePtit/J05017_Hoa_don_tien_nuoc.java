
//package com.proit4all.continue_code;
import java.util.*;

public class J05017_Hoa_don_tien_nuoc {
    static class KH{
        public String id, name;
        public Long csCu, csMoi, total;

        public KH(String id, String name, Long csCu, Long csMoi) {
            this.id = id;
            this.name = name;
            this.csCu = csCu;
            this.csMoi = csMoi;
            long f = csMoi - csCu;
            this.total = Xuly(f);
        }
        
        public Long Xuly(long f) {
            long ans = 0;
            if (f < 51) {
                ans = (long) Math.round(f * 100 + f * 100 * 0.02);
            }
            else if (f < 101) {
                long tmp = (f - 50) * 150 + 50 * 100; 
                ans = (long) Math.round(tmp + 0.03 * tmp);
            }
            else {
                long tmp = (f - 100) * 200 + 50 * 150 + 50 * 100; 
                ans = (long) Math.round(tmp + 0.05 * tmp);
            }
            return ans;
        }
        @Override
        public String toString() {
            return String.format("%s %s %d", id, name, total);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        List<KH> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            list.add(new KH("KH" + String.format("%02d", i), sc.nextLine(), sc.nextLong(), sc.nextLong()));
        }
        list.sort(((o1, o2) -> o2.total.compareTo(o1.total)));
        
        for (KH x : list) {
            System.out.println(x);
        }
    }
}