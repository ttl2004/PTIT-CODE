import java.util.*;
import java.io.*;
import java.math.BigInteger;
public class J07003_Tach_doi_va_tinh_tong {
    public static void main(String[] args)  throws IOException {
        //String fileName = "E://Code_Ptit//Java - codeptit//DATA.txt";
        String fileName = "DATA.in";
        Scanner sc = new Scanner(new File(fileName));
        String s = sc.next();
        if (s.length() == 1) {
            System.out.println(s);
            return;
        }
        while (s.length() > 1) {
            BigInteger a = new BigInteger(s.substring(0, s.length() / 2));
            BigInteger b = new BigInteger(s.substring(s.length() / 2));
            s = a.add(b).toString();
            System.out.println(s);
        }
    }
}