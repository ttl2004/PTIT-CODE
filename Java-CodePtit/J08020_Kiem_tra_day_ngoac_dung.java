import java.util.*;

public class J08020_Kiem_tra_day_ngoac_dung {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t -- > 0) {
            String s = sc.next();
            Stack<Character> stk = new Stack<>();
            for (int i = 0; i < s.length(); i ++) {
                char x = s.charAt(i);
                if (x == '(' || x == '[' || x == '{') {
                    stk.push(x);
                }
                else {
                    if (stk.size() > 0 && stk.peek() == '(' && x == ')') {
                        stk.pop();
                    }
                    else if (stk.size() > 0 && stk.peek() == '['  && x == ']') {
                        stk.pop();
                    }
                    else if (stk.size() > 0 && stk.peek() == '{' && x == '}') {
                        stk.pop();
                    }
                }
            }
            if (stk.size() == 0) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
