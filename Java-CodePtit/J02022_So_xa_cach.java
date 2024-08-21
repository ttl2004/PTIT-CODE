import java.util.*;
import java.math.*;

public class J02022_So_xa_cach {
    public static int check(int [] a,int n) {
        for (int i = 2; i <= n; i++) {
            if (Math.abs(a[i] - a[i - 1]) == 1) return 0;
        }
        return 1;
    }
    static int ok = 0;
    public static void sinh(int n, int [] a) {
        int i = n - 1;
        while (i > 0 && a[i] > a[i + 1]) i --;
        if (i == 0) {
            ok = 1;
            return;
        }
        else{
            int j = n;
            while (a[j] < a[i]) j --;
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            int l = i + 1, r = n;
            while (l < r) {
                tmp = a[l];
                a[l] = a[r];
                a[r] = tmp;
                l ++;
                r --;
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            ok = 0;
            int n = sc.nextInt();
            int [] a = new int[n + 5];
            for (int i = 1; i <= n; i ++) a[i] = i;
            do {
                if (check(a,n) == 1) {
                    for (int i = 1; i <= n; i ++) System.out.print(a[i] + "");
                    System.out.println();
                }
                sinh(n, a);
            } while (ok != 1);

            System.out.println();
        }
    }
}