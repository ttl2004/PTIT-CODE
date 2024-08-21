import java.util.*;

public class J02005_Giao_cua_hai_day_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        int[] c = new int[1001];  
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            c[a[i]] = 1;  
        }

       
        Set<Integer> result = new TreeSet<>();
        for (int i = 0; i < m; i++) {
            b[i] = sc.nextInt();
            if (c[b[i]] == 1) {  
                result.add(b[i]);  
            }
        }

        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}
