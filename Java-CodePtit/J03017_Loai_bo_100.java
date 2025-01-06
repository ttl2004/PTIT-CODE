import java.util.*;

public class J03017_Loai_bo_100 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        sc.nextLine(); 
        
        while (t-- > 0) {
            String s = sc.nextLine();
            int len = s.length();
            Stack<Integer> st = new Stack<>();
            for (int i = 0; i < len; i ++) {
                if (st.size() < 2) st.push(i);
                else {
                    if (s.charAt(i) == '0' && s.charAt(st.lastElement()) == '0' && s.charAt(st.elementAt(st.size() - 2)) == '1') {
                        st.pop();
                        st.pop();
                    }
                    else st.push(i);
                }
            }
            int cnt = 0;
            for (int i = 1; i < st.size(); i ++) {
                cnt = Math.max(cnt, st.elementAt(i) - st.elementAt(i - 1) - 1);
            }

            if (st.empty()) cnt = s.length();
            else {
                cnt = Math.max(cnt, st.elementAt(0));
                cnt = Math.max(cnt, s.length() - st.lastElement() - 1);
            }
            System.out.println(cnt);
        }
        sc.close(); 
    }

}
