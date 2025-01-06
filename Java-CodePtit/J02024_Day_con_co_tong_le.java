import java.util.*;

public class J02024_Day_con_co_tong_le {
    public static void Backtrack (int pos, int n, Vector<Integer> tmp, Integer [] a, int s) {
        if (pos == n) {
            if (s % 2 == 1) {
                for (int i = 0; i < tmp.size(); i ++) {
                    System.out.print(tmp.get(i) + " ");
                }
                System.out.println();     
            }
        }
        else {
            Backtrack(pos + 1, n, tmp, a, s);
            tmp.add(a[pos]);
            Backtrack(pos + 1, n, tmp, a, s + a[pos]);
            tmp.remove(tmp.size() - 1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t -- > 0) {
            int n = sc.nextInt();
            Integer [] a = new Integer[n + 1];
            for (int i = 0; i < n; i ++) {
                a[i] = sc.nextInt();
            }
            Arrays.sort(a, 0, n, Collections.reverseOrder());
            Vector<Integer> tmp = new Vector<>();
            Backtrack(0, n, tmp, a, 0);
        }
    }
}
