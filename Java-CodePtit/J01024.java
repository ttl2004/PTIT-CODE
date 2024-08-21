import java.util.*;
public class J01024 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            String s = sc.next();
            int n = s.length();
            int check = 1;
            for (int i = 0; i < n; i ++) {
                if (s.charAt(i) != '0' && s.charAt(i) != '1' && s.charAt(i) != '2') {
                    check = 0;
                    break;
                }
            }
            if (check == 1) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}