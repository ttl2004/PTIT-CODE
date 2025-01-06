import java.util.*;

public class J04007_Khai_bao_lop_nhan_vien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String GioiTinh = sc.nextLine();
        String date = sc.nextLine();
        String [] tmp1 = date.split("/");
        if  (tmp1[0].length() == 1) tmp1[0] = "0" + tmp1[0];
        if  (tmp1[1].length() == 1) tmp1[1] = "0" + tmp1[1];
        date = tmp1[0] + "/" + tmp1[1] + "/" + tmp1[2];
        String address = sc.nextLine(), phone = sc.next(), date2 = sc.next();
        String [] tmp2 = date2.split("/");
        if  (tmp2[0].length() == 1) tmp2[0] = "0" + tmp2[0];
        if  (tmp2[1].length() == 1) tmp2[1] = "0" + tmp2[1];
        date2 = tmp2[0] + "/" + tmp2[1] + "/" + tmp2[2];
        System.out.printf("00001 %s %s %s %s %s %s", name, GioiTinh, date, address, phone, date2);

    }
}