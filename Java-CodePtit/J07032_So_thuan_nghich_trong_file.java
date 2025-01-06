
//package com.proit4all.continue_code;
import java.util.*;
import java.io.*;
public class J07032_So_thuan_nghich_trong_file {
    static boolean check(Integer x){
        String s = x.toString();
        int n = s.length();
        for(int i = 0 ;i < n / 2;i++){
            if(s.charAt(i) != s.charAt(n - 1 - i)) return false;
        }
        if(n % 2 == 1 && n > 1){
            for(int i=0; i<s.length(); i++){
                int u = s.charAt(i) - '0';
                if(u % 2==0) return false;
            }
            return true;
        }
        return false;
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ob1 = new ObjectInputStream (new FileInputStream("DATA1.in"));
        ObjectInputStream ob2 = new ObjectInputStream (new FileInputStream("DATA2.in"));
        
        ArrayList<Integer> a = (ArrayList<Integer>) ob1.readObject();
        ArrayList<Integer> b = (ArrayList<Integer>) ob2.readObject();
        
        Map<Integer, Integer> mp1 = new TreeMap<>(), mp2 = new TreeMap<>(), ans = new TreeMap<>();
        
        for (Integer x : a) {
            if (check(x) == true) {
                if (mp1.containsKey(x) == false) mp1.put(x, 1);
                else mp1.put(x, mp1.get(x) + 1);
            }
        }
        for (Integer x : b) {
            if (check(x) == true) {
                if (mp2.containsKey(x) == false) mp2.put(x, 1);
                else mp2.put(x, mp2.get(x) + 1);
            }
        }
        
        for (Map.Entry<Integer, Integer> entry : mp1.entrySet()) {
            if (mp2.containsKey(entry.getKey())) ans.put(entry.getKey(), entry.getValue() + mp2.get(entry.getKey()));
        }
        
        int cnt = 0;
        for (Map.Entry<Integer, Integer> entry : ans.entrySet()) {
            if (cnt == 10) break;
            System.out.println(entry.getKey() + " " + entry.getValue());
            cnt++;
        }
    }
    
}
