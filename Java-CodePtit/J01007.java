import java.util.*;
public class J01007 {
    static long []f = new long[1000];
    public static int find(long n, int l, int r) {
        while (l <= r) {
            int mid = (l + r) / 2;
            if (f[mid] == n) return mid;
            else if (f[mid] < n) l = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
    public static void fibo() {
        f[0] = 0;
        f[1] = 1;
        for(int i = 2; i < 93; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        fibo();
        int t = sc.nextInt();
        while(t-- > 0) {
            long n = sc.nextLong();
            if (find(n, 0, 92) == -1) System.out.println("NO");
            else System.out.println("YES");
        }
    }
}