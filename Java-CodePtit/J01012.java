import java.util.*;
public class J01012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int cnt = 0;
            for (int i = 1; i * i <= n; i++) {
                int j = n / i ;
                if (i != j && n % i == 0 && n % j == 0 && i % 2 == 0 && j % 2 == 0) {
                    cnt += 2;
                }
                else if ((n % i == 0 && i % 2 == 0) || (n % j == 0 && j % 2 == 0)) {
                    cnt += 1;
                }
            }
            System.out.println(cnt);
        }
    }
}