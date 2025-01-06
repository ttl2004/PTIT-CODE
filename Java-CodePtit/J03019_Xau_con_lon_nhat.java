import java.util.*;

public class J03019_Xau_con_lon_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Stack<Character> st = new Stack<>();
        String s = sc.next();

        for (int i = 0; i < s.length(); i++) {
            while (!st.empty() && s.charAt(i) > st.peek()) {
                st.pop();
            }
            st.push(s.charAt(i));
        }

        Vector<Character> res = new Vector<>();
        while (st.size() > 0) {
            //System.out.print(st.pop());
            res.add(st.pop());
        }
        int n = res.size();
        for (int i = n - 1; i >= 0; i--) {
            System.out.print(res.get(i));
        }
        
    }
}
