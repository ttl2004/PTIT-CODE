import java.util.*;

public class J02027_Khoang_cach_nho_hon_k {
    public static long lower_bound(long [] arr, long left, long right, long X){
        long low  = left, high = right;
        while (low < high) {
            long mid = (low + high) / 2;
            if  (arr[(int) mid] >= X) high = mid;
            else low = mid + 1;
        }
        return low;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t --  > 0 )  {
            long n = sc.nextLong(), k = sc.nextLong();
            long []a = new long[(int) n + 5];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextLong();
            }
            Arrays.sort(a, 0, (int) n);
            long cnt = 0;
            for (int i = 0; i < n; i++) {
                long pos =  lower_bound(a, i + 1, n, a[i] + k);
                cnt += pos - i - 1;
            }
            System.out.println(cnt);
        }
    }
}
