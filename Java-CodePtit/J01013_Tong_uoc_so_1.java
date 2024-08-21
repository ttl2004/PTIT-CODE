import java.util.*;
import java.math.*;
public class J01013_Tong_uoc_so_1 {
    static int [] check = new int [2000001];
    public static void sang() {
        for (int i = 1; i <= 2000000; i++) {
            check[i] = i;
        }
        for (int i = 2; i * i <= 2000000; i++) {
            if (check[i] == i) {
                for (int j = i * i; j <= 2000000; j += i) {
                    if (check[j] == j) check[j] = i;
                }
            }
        }

    }
    public static int xuly(int n) {
        int sum = 0;
        while (n != 1) {
            int f = check[n];
            while (n % f == 0) {
                sum += f;
                n /= f;
            }
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sang();
        long sum = 0;
        while (t-- > 0) {
            int n = sc.nextInt();
            sum += xuly(n);
        }
        System.out.println(sum);
    }
}