import java.util.*;
import java.math.*;

public class J04003_Phan_so {

    public static long gcd(long a, long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = gcd(a, b);
        a = a / c;
        b = b / c;
        System.out.println(a + "/" + b);
    }
}
