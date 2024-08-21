import java.util.*;
public class J02020_Liet_ke_to_hop_1 {
    static int ok = 1;
    public static void LietKeToHop(int n, int k, int[] a) {
        int i = k;
        while (i > 0 && a[i] == n - k + i) i --;
        if (i == 0) {
            ok = 0;
            return;
        } 
        else {
            a[i] ++;
            for (int j = i + 1; j <= k; j ++) a[j] = a[j - 1] + 1;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] a = new int[k + 1];
        for (int i = 1; i <= k; i ++) a[i] = i;
        int cnt = 0;
        do {
            for (int i = 1; i <= k; i ++) System.out.print(a[i] + " ");
            System.out.println();
            LietKeToHop(n, k, a);
            cnt ++;
        }while (ok == 1);
        System.out.println("Tong cong co " + cnt + " to hop");
    }
}