import java.util.*;
import java.math.*;

public class J08028_Hinh_chu_nhat_don_sac {
    public static Long Xuly(int []a, int n) {
        long maxArea = 0;
        int [] Left = new int[n];
        int [] Right = new int[n];
        Stack<Integer> stk = new Stack<>();

        for (int i = 0; i < n; i ++) {
            while (!stk.isEmpty() && a[i] <= a[stk.peek()]) {
                stk.pop();
            }
            if (stk.isEmpty()){
                Left[i] = 0;
            }
            else {
                Left[i] = stk.peek() + 1;
            }
            stk.add(i);
        }

        stk = new Stack<>();

        for (int i = n - 1; i >= 0; i --) {
            while (!stk.isEmpty() && a[i] <= a[stk.peek()]) {
                stk.pop();
            }
            if (stk.isEmpty()) {
                Right[i] = n - 1;
            }
            else {
                Right[i] = stk.peek() - 1;
            }
            stk.add(i);
        }
        
        for (int i = 0; i < n; i ++) {
            //System.out.print(Right.get(i) - Left.get(i) + 1 + " ");
            maxArea = Math.max(maxArea, (long)a[i] * (Right[i] - Left[i] + 1));
        }
        //System.out.println();
        //System.out.println(maxArea);
        return maxArea;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt(), n = sc.nextInt();
        int [] a = new int[n];
        int [] b = new int[n];

        for (int i = 0; i < n; i ++) {
            a[i] = sc.nextInt();
            b[i] = m - a[i];
        }

        System.out.println(Math.max(Xuly(a, n), Xuly(b, n)));
    }
}
