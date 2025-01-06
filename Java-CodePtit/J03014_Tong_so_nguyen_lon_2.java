import java.math.BigInteger;
import java.util.*;

public class J03014_Tong_so_nguyen_lon_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        BigInteger a = new BigInteger(scanner.next());
        BigInteger b = new BigInteger(scanner.next());
        BigInteger sum = a.add(b);
        System.out.println(sum);
    }
}
