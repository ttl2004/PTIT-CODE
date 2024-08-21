import java.util.*;
public class J02011_Sap_xep_chon {
    public static void sort(int n, int[] a) {
        int idx = 1;
        for (int i = 0; i < n - 1; i ++) {
            int index = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[index]) {
                    index = j;
                }
            }
            int tmp = a[i];
            a[i] = a[index];
            a[index] = tmp;
            System.out.print("Buoc " + idx++ + ": ");
            for (int k = 0; k < n; k++) {
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