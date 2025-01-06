import java.util.*;
import java.math.*;

public class J01010_Cat_doi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t -- > 0) {
            String number = sc.next();
            int ok = 0;
            
            for (int i = 0; i < number.length(); i ++) {
                if (number.charAt(i) == '1') ok = 1;
                else if (!(number.charAt(i) == '0' || number.charAt(i) == '8' || number.charAt(i) == '9')) {
                    ok = 0;
                    break;
                }
            }

            if (ok == 0) {
                System.out.println("INVALID");
            }
            else {
                ok = 0;
                
                for (int i = 0; i < number.length(); i ++) {
                    if (number.charAt(i) == '1') {
                        System.out.print("1");
                        ok = 1;
                    }
                    else if (ok == 1) {
                        System.out.print("0");
                    }
                }
                System.out.println();
            }
        }
    }
}
