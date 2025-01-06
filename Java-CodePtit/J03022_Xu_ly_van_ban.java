import java.util.*;

public class J03022_Xu_ly_van_ban {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = "";
        while (sc.hasNextLine()) {
           str += sc.nextLine();
        }
        String [] a = str.trim().toLowerCase().split("[.?!]");
        for (String x : a) {
            x = x.trim();
            x = x.substring(0, 1).toUpperCase() + x.substring(1);
            for (String y : x.split("\\s+")) {
                System.out.print(y + " ");
            }
            System.out.println();
        }
    }
}
