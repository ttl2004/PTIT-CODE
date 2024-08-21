import java.util.*;
import java.math.*;
public class J03039_Chia_het {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            if ((a.remainder(b).compareTo(BigInteger.ZERO) == 0) || (b.remainder(a).compareTo(BigInteger.ZERO) == 0)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}