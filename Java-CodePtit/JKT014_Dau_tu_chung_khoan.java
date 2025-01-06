import java.util.*;

public class JKT014_Dau_tu_chung_khoan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        while (t -- > 0) {
            int n = sc.nextInt();
            int [] a = new int[n + 2];
            Stack<Integer> stk = new Stack<>();
            for (int i = 1; i <= n; i ++) {
                a[i] = sc.nextInt();
            }
            for (int i = 1; i <= n; i ++) {
                while (!stk.empty() && a[i] >= a[stk.peek()]) stk.pop();
                if (!stk.empty()) {
                    System.out.print((i - stk.peek()) + " ");
                }
                else System.out.print(i  + " ");
                stk.push(i);
            }
            System.out.println();
        }
    }
}
