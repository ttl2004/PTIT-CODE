import java.util.*;
import java.lang.Math.*;
public class J02036_Uoc_so_chung_lon_nhat {
    public static long gcd(long a, long b) {
        return b == 0 ? a : gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t  = sc.nextInt();
        while (t -- > 0) {
            int n = sc.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) a[i] = sc.nextInt();
            System.out.print(a[0] + " ");
            for (int i = 1; i < n; i++) {
                System.out.print(a[i - 1] * a[i] / gcd(a[i - 1], a[i]) + " ");
            }   
            System.out.println(a[n - 1]);
        }
    }
}
