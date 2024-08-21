import java.util.*;

public class J02104_Danh_sach_canh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [][] a = new int[n + 1][n + 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
                if (j > i && a[i][j] == 1) {
                    System.out.println("(" + (i + 1) + "," + (j + 1) + ")\n");
                }
            }
        }

    }
}