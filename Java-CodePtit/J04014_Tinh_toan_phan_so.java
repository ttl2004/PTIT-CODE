import java.util.*;
import java.lang.Math.*;
public class J04014_Tinh_toan_phan_so {
    public static long gcd(long a, long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-- > 0) {
            long x = sc.nextLong();
            long y = sc.nextLong();
            long z = sc.nextLong();
            long t = sc.nextLong();
            long C_tu = (x * t  + z * y) * (x * t  + z * y), C_mau = (y * t) * (y * t);
            long ucln = gcd(C_tu, C_mau);
            System.out.print(C_tu / ucln + "/" + C_mau / ucln + " ");
            long D_tu = x * z * C_tu, D_mau = y * t * C_mau;
            ucln = gcd(D_tu, D_mau);
            System.out.println(D_tu / ucln + "/" + D_mau / ucln);
        }
    }
}