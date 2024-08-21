import java.util.*;

public class J01005_Chia_tam_giac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int h = sc.nextInt();
            double S1 = (double) h / 2;
            double S_tmp = S1/n;
            for (int i = 1; i < n; i++) {
                double X_i = Math.sqrt(S_tmp * i / S1) * h;
                System.out.printf("%.6f ", X_i);
            }
            System.out.println();
        }
    }
}