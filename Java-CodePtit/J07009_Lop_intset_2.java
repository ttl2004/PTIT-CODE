
//package com.proit4all.continue_code;

import java.util.*;
import java.io.*;
public class J07009_Lop_intset_2 {
    static class IntSet{
        public Integer n;
        public Set<Integer> st;

        public IntSet() {
            st = new TreeSet<>();
        }
        
        
        IntSet(int []a) {
            st = new TreeSet<>();
            for (int i = 0; i < a.length; i ++) {
                st.add(a[i]);
            }
            n = st.size();
        }
        
        public IntSet intersection(IntSet b) {
            IntSet kq = new IntSet();
            for (Integer x : this.st) {
                if (b.st.contains(x)) {
                    kq.st.add(x);
                }
            }
            return kq;
        }
        
        @Override
        public String toString() {
            List<Integer> tmp = new ArrayList<>(st);
            int n = tmp.size();
            String ans = "";
            for (int i = 0; i < n; i ++) {
                ans += tmp.get(i);
                if (i != n - 1) ans += " ";
            }
            return ans;
        }
    }
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("input.txt"));
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.intersection(s2);
        System.out.println(s3);
    }
}
