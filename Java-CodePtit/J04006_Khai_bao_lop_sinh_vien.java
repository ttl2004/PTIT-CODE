import java.util.*;

public class J04006_Khai_bao_lop_sinh_vien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String lop = sc.nextLine();
        String date = sc.next();
        float gpa = sc.nextFloat();
        String [] str = date.split("/");
        if (str[0].length() == 1) str[0] = "0" + str[0];
        if (str[1].length() == 1) str[1] = "0" + str[1];
        date = str[0] + "/" + str[1] + "/" + str[2];
        System.out.printf("B20DCCN001 %s %s %s %.2f", name, lop, date, gpa);
    }
}