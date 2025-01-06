import java.util.*;

public class J08022_Phan_tu_ben_phai_dau_tien_lon_hon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t -- > 0) {
            int n = sc.nextInt();
            int [] a = new int[n + 1];
            Stack<Integer> stk = new Stack<>();
            for (int i = 0; i < n; i ++){
                a[i] = sc.nextInt();
            }

            Vector<Integer> ans = new Vector<>();
            for (int i =  n - 1; i >= 0; i --) {
                while (!stk.empty() && a[i] >= a[stk.peek()]) stk.pop();
                if (!stk.empty()) {
                    ans.add(a[stk.peek()]);
                }
                else ans.add(-1);
                stk.push(i);
            }

            for (int i = n - 1; i >= 0; i --) {
                System.out.print(ans.get(i) + " ");
            }
            System.out.println();
        }
    }
}
