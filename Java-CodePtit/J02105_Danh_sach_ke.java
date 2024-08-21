import java.util.*;

public class J02105_Danh_sach_ke {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [][] a = new int[n + 2][n + 2];
        for (int i = 1; i <= n; i++) {
            System.out.print("List(" + i + ") = ");
            for (int j = 1; j <= n; j++) {
                a[i][j] = sc.nextInt();
                if (a[i][j] == 1) System.out.print(j + " ");
            }
            System.out.println();
        }

    }
}