import java.util.*;
import java.math.*;

public class J08023_Hinh_chu_nhat_lon_nhat {
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

        return maxArea;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t -- > 0) {
            int n = sc.nextInt();
            int [] a = new int[n + 1];

            for (int i = 0 ; i < n; i ++) {
                a[i] = sc.nextInt();
            }
            System.out.println(Xuly(a, n));
        }
    }
}
