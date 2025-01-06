import java.util.*;

public class JKT015_Go_ban_phim {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Stack<Character>  stk = new Stack<>(), tmp = new Stack<>();
        int len = s.length();
        for (int i = 0 ; i < len; i ++) {
            char x = s.charAt(i);
            if (x == '<') {
                if (stk.size() > 0) {
                    tmp.push(stk.pop());
                }
            }
            else if (x == '>') {
                if (tmp.size() > 0) {
                    stk.push(tmp.pop());
                }
            }
            else if (x == '-') {
                if (stk.size() > 0) {
                    stk.pop();
                }
            }
            else stk.push(x);
        }

        while (stk.size() > 0) {
            tmp.push(stk.pop());
        }
        while (tmp.size() > 0) {
            System.out.print(tmp.pop());
        }
    }
}
