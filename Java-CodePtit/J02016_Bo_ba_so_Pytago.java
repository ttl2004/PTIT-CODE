import java.util.*;

public class J02016_Bo_ba_so_Pytago {
    public static int Binary_search(long[] a, int l, int r, long x) {
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (a[mid] == x) return mid;
            if (a[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long [] a  = new long[n + 5];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextLong();
                a[i] *= a[i];
            }
            Arrays.sort(a, 0, n);
            boolean check = false;
            for (int i = 0; i < n - 2; i++) {
                for (int j = i + 1; j < n - 1; j++) {
                    long sum = a[i] + a[j];
                    int pos = Binary_search(a, j + 1, n - 1, sum);
                    if (pos != -1) {
                        check = true;
                        break;
                    }
                }
                if (check) break;
            }
            if (check) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
