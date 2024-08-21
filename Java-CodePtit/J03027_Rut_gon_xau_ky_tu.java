import java.util.*;
public class J03027_Rut_gon_xau_ky_tu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (st.empty() || s.charAt(i) != st.peek()) {
                st.push(s.charAt(i));
            } 
            else if (s.charAt(i) == st.peek() && !st.empty()) {
                st.pop();
            }
        }
        if (st.size() == 0) {
            System.out.print("Empty String");
        }
        else {
            for (int i = 0; i < st.size(); i++) {
                System.out.print(st.get(i));
            }
        }
    }
}