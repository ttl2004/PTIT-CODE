import java.util.*;

public class J02010_Sap_xep_doi_cho_truc_tiep {
    public static void sort(int n, int[] a) {
        int cnt = 1;
        for (int i = 0; i < n; i ++) {
            int check = 0;
            for (int j = i; j < n; j ++) {
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    check = 1;
                }
            }
            if (check == 1) {
                System.out.print("Buoc " + cnt++ + ": ");
                for (int k = 0; k < n; k ++) {
                    System.out.print(a[k] + " ");
                }
                System.out.println();
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n + 1];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sort(n, a);
    }
}