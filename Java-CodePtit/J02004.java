import java.util.*;
public class J02004 {
    public static String check (int n, int [] a) {
        for (int i = 0; i < n / 2; i++) {
            if ( a[i] != a[n - i - 1] ) return "NO";
        }
        return "YES";
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int [] a = new int[n + 1];
            for(int i = 0; i < n; i++) {    
                a[i] = sc.nextInt();
            }
            System.out.println(check(n, a));
        }
    }
}