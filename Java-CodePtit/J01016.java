import java.util.*;
public class J01016 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        String s = String.valueOf(n);
        long dem = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '4' || s.charAt(i) == '7') dem++;
        }
        if (dem == 4 || dem == 7) System.out.println("YES");
        else System.out.println("NO");
    }
}