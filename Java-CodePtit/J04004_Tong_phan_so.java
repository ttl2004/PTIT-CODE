import java.util.*;
import java.io.*;
import java.math.*;

public class J04004_Tong_phan_so {
    public static long gcd(long a, long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        long d = sc.nextLong();
        long tu = a * d + b * c;
        long mau = b * d;
        long ucln = gcd(tu, mau);
        System.out.println(tu / ucln + "/" + mau / ucln);
    }
}
