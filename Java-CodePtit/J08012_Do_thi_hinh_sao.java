import java.util.*;
public class J08012_Do_thi_hinh_sao {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] a = new int[n + 5];
        for (int i = 0; i < n - 1; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            a[x] ++;
            a[y] ++;
        }
        int f = 0, k = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] == n - 1) f ++;
            else if (a[i] == 1) k ++;
            else {
                System.out.println("No");
                break;
            }
        }
        if (f == 1 && k == n - 1) System.out.println("Yes");
    }

}
