import java.util.*;
public class J03008_So_dep_3 {
    public static int ktra(int n) {
        if (n < 2) return 0;
        for (int i = 2; i * i <= n; i ++) {
            if (n % i == 0) return 0;
        }
        return 1;
    } 
    public static boolean check(String s) {
        for(int i = 0; i < s.length() / 2; i++) 
            if (s.charAt(i) != s.charAt(s.length() - 1 - i)) return false;
        for (int i = 0; i < s.length(); i++) {
            int num = s.charAt(i) - '0';
            if (ktra(num) == 0) return false;
        }

        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            String s = sc.next();
            if (check(s)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}