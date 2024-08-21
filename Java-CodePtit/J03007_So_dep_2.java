import java.util.*;
public class J03007_So_dep_2 {
    public static boolean check(String s) {
        for(int i = 0; i < s.length() / 2; i++) 
            if (s.charAt(i) != s.charAt(s.length() - 1 - i)) return false;
        if (!(s.charAt(0) == '8' && s.charAt(s.length() - 1) == '8')) return false;
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int num = s.charAt(i) - '0';
            sum += num;
        }
        if (sum % 10 != 0) return false;
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