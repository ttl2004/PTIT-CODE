import java.util.*;

public class J04005_Khai_bao_lop_thi_sinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String date = sc.next();
        float d1 = sc.nextFloat(), d2 = sc.nextFloat(), d3 = sc.nextFloat();
        String [] str = date.split("/");
        if (str[0].length() == 1) str[0] = "0" + str[0];
        if (str[1].length() == 1) str[1] = "0" + str[1];
        date = str[0] + "/" + str[1] + "/" + str[2];
        System.out.printf("%s %s %.1f", name, date, d1 + d2 + d3);
    }
}