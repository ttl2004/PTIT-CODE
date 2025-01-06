import java.util.*;
import java.lang.Math.*;

public class J08021_Day_ngoac_dung_dai_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t -- > 0) {
            String s = sc.next();
            Stack<Integer> stk = new Stack<>();
            int len = s.length(), count = 0;
            stk.push(-1);
            for (int i = 0; i < len; i ++) {
                if (s.charAt(i) == '(') {
                    stk.push(i);
                }
                else {
                    stk.pop();
                    if (!stk.empty()) {
                        count = Math.max(count, i - stk.peek());
                    }
                    else {
                        stk.push(i);
                    }
                }
            }
            System.out.println(count);
        }
    }
}
