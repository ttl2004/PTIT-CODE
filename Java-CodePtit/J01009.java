import java.util.*;
public class J01009 {
    public static long gthua(long n) {
        if (n == 0 || n == 1) return 1;
        else return n * gthua(n - 1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long sum = 0;
        for (long i = 1; i <= n; i ++) {
            sum += gthua(i);
        }
        System.out.print(sum);
    }
}