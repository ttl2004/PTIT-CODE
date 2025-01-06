import java.util.*;

public class J03024_So_uu_the {  
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s = sc.next();
            int len = s.length();
            int cnt1 = 0, cnt2 = 0;
            for (int i = 0; i < len; i ++) {
                if (s.charAt(i) >= '0' && s.charAt(i) <= '9') {
                    if ((s.charAt(i) - '0') % 2 == 0) cnt1 ++;
                    else if ((s.charAt(i) - '0') % 2 != 0) cnt2 ++;
                }
            }
            if (cnt1 + cnt2 != len) System.out.println("INVALID");
            else if (cnt1 > cnt2 && len % 2 == 0) System.out.println("YES");
            else if (cnt2 > cnt1 && len % 2 != 0) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}