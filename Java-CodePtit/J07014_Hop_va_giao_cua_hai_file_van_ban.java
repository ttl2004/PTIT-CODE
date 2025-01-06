
//package com.proit4all.continue_code;

import java.util.*;
import java.io.*;
public class J07014_Hop_va_giao_cua_hai_file_van_ban {
    static class WordSet{
        public Set<String> st;

        public WordSet() {
            this.st = new TreeSet<>();
        }

        public WordSet(String s) throws IOException{
            Scanner sc = new Scanner(new File(s));
            this.st = new TreeSet<>();
            while (sc.hasNext()){
                st.add(sc.next().toLowerCase());
            }
        }
        
        public WordSet union(WordSet other) {
            WordSet ans = new WordSet();
            ans.st = new TreeSet<>(this.st);
            for (String x : other.st) {
                if (this.st.contains(x) == false) ans.st.add(x);
            }
            return ans;
        }
        
        public WordSet intersection(WordSet other) {
            WordSet ans = new WordSet();
            for (String x : this.st) {
                if (other.st.contains(x)) ans.st.add(x);
            }
            return ans;
        }
        
        @Override
        public String toString() {
            String ans = "";
            for (String x : st) ans += x + " ";
            return ans;
        }
    }
    public static void main(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in");
        WordSet s2 = new WordSet("DATA2.in");
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}
