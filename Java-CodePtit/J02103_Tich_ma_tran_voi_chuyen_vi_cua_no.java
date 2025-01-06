import java.util.*;

public class J02103_Tich_ma_tran_voi_chuyen_vi_cua_no {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int idx = 1;
        while (t-- > 0) {
            int n = sc.nextInt(), m = sc.nextInt();
            long [][] a = new long[n][m], b = new long[m][n], c = new long[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    a[i][j] = sc.nextLong();
                }
            }
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    b[i][j] = a[j][i];
                }
            }
            System.out.println("Test " + idx + ":");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                   for (int k = 0; k < n; k++) {
                       c[i][k] += a[i][j] * b[j][k];
                   }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(c[i][j] + " ");
                }
                System.out.println();
            }
            idx++;
        }

    }
}