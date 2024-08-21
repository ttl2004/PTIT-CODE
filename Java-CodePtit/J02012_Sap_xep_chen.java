import java.util.*;
public class J02012_Sap_xep_chen {
    public static void sort(int n, int[] arr) {
        System.out.println("Buoc 0: " + arr[0]);
        int cnt = 1;
        for (int i = 1; i < n; i++){
            int key = arr[i];
            int j = i-1;
            while (j >= 0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
            System.out.print("Buoc " + cnt++ + ": ");
            for (int k = 0; k <= i; k ++) {
                System.out.print(arr[k] + " ");
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