import java.util.*;
public class J02013_Sap_xep_noi_bot {
    public static void sort(int n, int[] a) {
        int cnt = 1;
        for (int i = 0; i < n - 1; i ++) {
            boolean ok = false;
            for (int j = 0; j < n - 1; j ++) {
                if (a[j] > a[j + 1]) {
                    int tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                    ok = true;
                }
            }
            if (!ok) break;
            System.out.print("Buoc " + cnt++ + ": ");
            for (int k = 0; k < n; k ++) {
                System.out.print(a[k] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sort(n, a);
    }
}