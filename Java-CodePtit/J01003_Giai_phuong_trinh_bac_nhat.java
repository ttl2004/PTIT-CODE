import java.util.*;
public class J01003_Giai_phuong_trinh_bac_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int  a = sc.nextInt();
        int b = sc.nextInt();
        if (a == 0 && b == 0) {
            System.out.println("VSN");
        }
        else if (a == 0) {
            System.out.println("VN");
        }
        else {
            double x = (double) -b / a;
            System.out.println(String.format("%.2f", x));
        }
    }
}