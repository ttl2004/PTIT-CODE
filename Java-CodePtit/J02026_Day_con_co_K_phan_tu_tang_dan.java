import java.util.*;
public class J02026_Day_con_co_K_phan_tu_tang_dan {
    static ArrayList<String> res = new ArrayList<>();

    public static void Backtrack(int pos, int n, int k, int[] a, String s, int cnt) {
        if (pos == n) {
            if (cnt == k) {
                res.add(s);
            }
            return;
        }
        else{
            Backtrack(pos + 1, n, k, a, s, cnt);
            Backtrack(pos + 1, n, k, a, s + Integer.toString(a[pos]) + " ", cnt + 1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n, k;
            n = sc.nextInt();
            k = sc.nextInt();
            int [] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = sc.nextInt();
            Arrays.sort(a);
            Backtrack(0, n, k, a, "", 0);
            for (int i = res.size() - 1; i >= 0; i--) {
                System.out.println(res.get(i));
            }
            res.clear();
        }
    }
}