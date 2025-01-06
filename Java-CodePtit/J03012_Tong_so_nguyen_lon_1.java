import java.math.BigInteger;
import java.util.*;

public class J03012_Tong_so_nguyen_lon_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testCases = scanner.nextInt();
        for (int t = 0; t < testCases; t++) {
            BigInteger a = new BigInteger(scanner.next());
            BigInteger b = new BigInteger(scanner.next());
            BigInteger sum = a.add(b);
            System.out.println(sum);
        }
    }
}
