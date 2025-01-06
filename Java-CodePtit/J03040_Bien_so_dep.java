import java.util.*;

public class J03040_Bien_so_dep {
    public static int check(int[] a) {
        int a1 = a[0], a2 = a[1], a3 = a[2], a4 = a[3], a5 = a[4];
        if ((a1 < a2 && a2 < a3 && a3 < a4 && a4 < a5)) return 1;
        if ((a1 == a2 && a2 == a3 && a3 == a4 && a4 == a5)) return 1;
        if ((a1 == a2 && a2 == a3 && a4 == a5))  return 1;
        if (((a1 == 6 || a1 == 8) && (a2 == 6 || a2 == 8) && (a3 == 6 || a3 == 8) && (a4 == 6 || a4 == 8) && (a5 == 6 || a5 == 8))) return 1;
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            String s = sc.next();
            int [] a = new int[5];
            a[0] = s.charAt(5) - '0';
            a[1] = s.charAt(6) - '0';
            a[2] = s.charAt(7) - '0';
            a[3] = s.charAt(9) - '0';
            a[4] = s.charAt(10) - '0';
            if(check(a) == 1) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}