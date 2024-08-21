import java.util.*;
public class J01017 {
    public static int check (String number) {
        int len = number.length();
        for (int i = 1; i < len; i++) {
            int a = Integer.valueOf(number.charAt(i - 1));
            int b = Integer.valueOf(number.charAt(i));
            if (Math.abs(a - b) != 1) {
                return 0;
            }
        }
        return 1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            String number;
            number = sc.next();
            if (check(number) == 1) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}