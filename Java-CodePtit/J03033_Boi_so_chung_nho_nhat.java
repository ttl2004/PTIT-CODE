import java.util.*;
import java.math.*;
public class J03033_Boi_so_chung_nho_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger c = (a.multiply(b)).divide(a.gcd(b));
            System.out.println(c);
        }
    }
}