import java.util.*;

public class J02034_Bo_sung_day_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] cnt = new int[1000];
        int _max = 1;
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            cnt[x] = 1;
            _max = Math.max(x, _max);
        }
        int ok = 0;
        for (int i = 1; i <= _max; i++) {
            if (cnt[i] == 0) {
                System.out.println(i + " ");
                ok = 1;
            }
        }
        if (ok == 0) System.out.println("Excellent!");
    }
}