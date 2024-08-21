import java.util.*;
public class J02014_Diem_can_bang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
           int n = sc.nextInt();
           long [] a = new long[n + 2];
           long [] dp = new long[n + 2];
           dp[0] = 0;
           for (int i = 1; i <= n; i ++) {
               a[i] = sc.nextLong();
               dp[i] = dp[i - 1] + a[i];
           }
           int check = 0;
           for (int i = 1; i <= n; i ++) {
               if (dp[i - 1] - dp[0] == dp[n] - dp[i]) {
                   check = 1;
                   System.out.println(i);
                   break;
               }
           }
           if (check == 0) System.out.println(-1);
        }
    }
}    