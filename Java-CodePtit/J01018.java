import java.util.*;
public class J01018 {
    public static int check1 (String number) {
        int len = number.length();
        for (int i = 1; i < len; i++) {
            int a = Integer.valueOf(number.charAt(i - 1));
            int b = Integer.valueOf(number.charAt(i));
            if (Math.abs(a - b) != 2) {
                return 0;
            }
        }
        return 1;
    }
     public static int check2 (String number) {
        int sum = 0;
        long n = Long.parseLong(number);
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return (sum % 10 == 0) ? 1 : 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            String number;
            number = sc.next();
            if (check1(number) == 1 && check2(number) == 1) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}