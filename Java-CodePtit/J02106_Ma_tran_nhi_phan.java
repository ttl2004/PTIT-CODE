import java.util.*;
public class J02106_Ma_tran_nhi_phan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 0;
        for (int i = 0; i < n; i ++) {
            int cnt0 = 0, cnt1 = 0;
            for (int j = 0; j < 3; j ++) {
                if (sc.nextInt() == 0) cnt0 ++;
                else cnt1 ++;
            }
            if (cnt0 < cnt1) cnt ++;
        }
        System.out.println(cnt);
    }
}