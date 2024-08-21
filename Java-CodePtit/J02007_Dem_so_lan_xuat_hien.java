import java.util.*;
public class J02007_Dem_so_lan_xuat_hien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int test = 1;
        while(t-- > 0) {
            int n = sc.nextInt();
            int [] a = new int[n + 1];
            int [] b = new int[100005];
            for(int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                b[a[i]]++;
            }
            System.out.print("Test " + test + ":\n");
            for (int i = 0; i < n; i++) {
                if (b[a[i]] != 0) {
                    System.out.print(a[i] + " xuat hien " + b[a[i]] + " lan\n");
                    b[a[i]] = 0;
                }
            }
            System.out.println();
            test ++;
        }
    }
}