import java.util.*;

public class J04015_Tinh_thu_nhap_giao_vien {
    public static long check(String id){
        String tmp = id.substring(0, 2);
        if (tmp.equals("GV")) return 500000;
        else if (tmp.equals("HP")) return 900000;
        else return 2000000;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String id = sc.nextLine();
        String name = sc.nextLine();
        long salary = sc.nextLong();
        String tmp = id.substring(2);
        long Bac = Long.parseLong(tmp), PhuCap = check(id);
        long total = salary * Bac + PhuCap;
        System.out.println(id + " " + name + " " + Bac + " " + PhuCap + " " + total);
    }
}
