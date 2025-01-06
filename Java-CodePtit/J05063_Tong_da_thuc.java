
package com.proit4all.continue_code;

import java.util.*;
class DaThuc {
    private Map<Long, Long> arr;

    public DaThuc(String s) {
        arr = new TreeMap<>(Collections.reverseOrder()); 
        String[] a = s.split("\\+");

        for (String x : a) {
            String[] parts = x.split("\\*x\\^");
            long f = Long.parseLong(parts[0].trim());
            long k = Long.parseLong(parts[1].trim());
            arr.put(k, arr.getOrDefault(k, 0L) + f);
        }
    }

    public DaThuc cong(DaThuc other) {
        for (Map.Entry<Long, Long> entry : other.arr.entrySet()) {
            arr.put(entry.getKey(), arr.getOrDefault(entry.getKey(), 0L) + entry.getValue());
        }
        return this;
    }

    public String out() {
        StringBuilder result = new StringBuilder();
        boolean first = true;

        for (Map.Entry<Long, Long> entry : arr.entrySet()) {
            long f = entry.getValue();
            long k = entry.getKey();

            if (!first) {
                result.append(" + ");
            }
            result.append(f).append("*x^").append(k);
            first = false;
        }
        return result.toString();
    }

    @Override
    public String toString() {
        return out();
    }
}

public class J05063_Tong_da_thuc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            DaThuc p = new DaThuc(sc.nextLine());
            DaThuc q = new DaThuc(sc.nextLine());
            DaThuc r = p.cong(q);
            System.out.println(r);
        }
    }
    public static void main7794748(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            DaThuc p = new DaThuc(sc.nextLine());
            DaThuc q = new DaThuc(sc.nextLine());
            DaThuc r = p.cong(q);
            System.out.println(r);
        }
    }
}
