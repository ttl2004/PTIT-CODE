
//package com.proit4all.continue_code;
import java.util.*;
import java.math.*;
import java.io.*;
public class J01022_Xau_nhi_phan {
     static long []fb = new long[93];
    
    public static void Fibo(){
        fb[1] = fb[2] = 1;
        for (int i = 3; i < 93; i ++) {
            fb[i] = fb[i - 2] + fb[i - 1];
        }
    }
    
    public static String Xuly(long n, long k) {
        if (n == 1) return "0";
        else if (n == 2) return "1";
        else if (k <= fb[(int)n-2]) return Xuly(n - 2, k);
        else return Xuly(n - 1, k - fb[(int)n - 2]);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Fibo();
        int t =sc.nextInt();
        while (t -- > 0) {
            long n = sc.nextLong(), k = sc.nextLong();
            System.out.println(Xuly(n, k));
            
        }
    }
}
