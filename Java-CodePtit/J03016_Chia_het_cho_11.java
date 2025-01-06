import java.util.*;
import java.math.BigInteger;

public class J03016_Chia_het_cho_11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger n = sc.nextBigInteger();
            if (n.remainder(BigInteger.valueOf(11)).compareTo(BigInteger.ZERO) == 0) {
                System.out.println("1");
            } 
            else {
                System.out.println("0");   
            }
        }
    }
}