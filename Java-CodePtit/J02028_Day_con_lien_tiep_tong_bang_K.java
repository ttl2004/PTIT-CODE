import java.util.Scanner;

public class J02028_Day_con_lien_tiep_tong_bang_K {
    public static int Binnary(long [] a, long left, long right, long X) {
        while (left <= right) {
            long mid = (left + right) / 2;
            if (a[(int) mid] == X) 
                return 1;
            if (a[(int) mid] < X) 
                left = mid + 1;
            else 
                right = mid - 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t --  > 0 )  {
            long n = sc.nextLong(), k = sc.nextLong();
            long []a = new long[(int) n  + 5];
            long []dp = new long[(int) n  + 5];
            dp[0] = 0;
            for (int i = 1; i <= n; i++) {
                a[i] = sc.nextLong();
                dp[i] = dp[i - 1] + a[i];
            }
            int check = 0;
            for (int i = 0; i <= n - 1; i++) {
                int idx = Binnary(dp, i + 1, n, dp[i] + k);
                if (idx != -1) {
                    check = 1;
                    System.out.println("YES");
                    break;
                }
            }
            if (check == 0) System.out.println("NO");
        }
    }
}
