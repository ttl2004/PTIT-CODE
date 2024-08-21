import java.util.*;
public class J01011 {
    public static long GCD(long a, long b) {
        if (b == 0) return a;
        return GCD(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long ucln = GCD(a, b);
            long bcnn = a * b / ucln;
            System.out.println(bcnn + " " + ucln);
        }
    }
}