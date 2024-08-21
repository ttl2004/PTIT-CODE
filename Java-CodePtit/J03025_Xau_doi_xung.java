import java.util.*;
public class J03025_Xau_doi_xung {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            String s = sc.next();
            int n = s.length(), cnt = 0;
            for (int i = 0; i < n / 2; i++) {
                if (s.charAt(i) != s.charAt(n - 1 - i)) cnt++;
            }
            if ((n % 2 == 0 && cnt == 1) || (n % 2 == 1 && cnt <= 1)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}