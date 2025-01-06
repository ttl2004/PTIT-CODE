import java.util.*;
import java.lang.Math.*;

public class J08015_Cap_so_co_tong_bang_K {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t  = sc.nextInt();
        while (t -- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            long cnt = 0;
            Map<Long, Integer> map = new HashMap<>();  // Changed to Map<Long, Integer>
            for  (int i = 0; i < n; i ++) {
                long x = sc.nextLong();
                long f = k - x;
                if (map.containsKey(f)) {
                    cnt += map.get(f);
                }
                map.put(x, map.getOrDefault(x, 0) + 1);
            }
            System.out.println(cnt);;
        }
    }
}
