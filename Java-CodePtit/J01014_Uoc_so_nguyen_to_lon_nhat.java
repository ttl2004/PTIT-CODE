import java.util.*;
import java.math.*;
public class J01014_Uoc_so_nguyen_to_lon_nhat {
    public static boolean check(long n) {
        if (n < 2) return false;
        for(long i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            long n = sc.nextLong();
            long _max = 0;
            for(int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    if (check(n / i)) {
                        _max = Math.max(_max, n / i);
                        break;
                    }
                    if (check(i)) {
                        _max = Math.max(_max, i);
                    }
                }
            }

            System.out.println(_max);
        }
    }
}