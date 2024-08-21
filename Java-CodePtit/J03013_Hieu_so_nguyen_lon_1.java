import java.util.*;
import java.math.BigInteger;
public class J03013_Hieu_so_nguyen_lon_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger c = a.subtract(b).abs();
            String s1 = a.toString(), s2 = b.toString(), s3 = c.toString();
            int n = Math.max(s1.length(), s2.length());
            int m = n - s3.length();
            for(int i = 0; i < m; i++) System.out.print("0");
            System.out.println(c);
        }
    }
}