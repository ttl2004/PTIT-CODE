import java.util.*;

public class J03021_Dien_thoai_cuc_gach {
    public static char xuly(char c) {
        if (c >= 'A' && c <= 'C') return '2';
        if (c >= 'D' && c <= 'F') return '3';
        if (c >= 'G' && c <= 'I') return '4';
        if (c >= 'J' && c <= 'L') return '5';
        if (c >= 'M' && c <= 'O') return '6';
        if (c >= 'P' && c <= 'S') return '7';
        if (c >= 'T' && c <= 'V') return '8';
        if (c >= 'W' && c <= 'Z') return '9';
        return '0';
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);       
        
        int t = sc.nextInt();

        while (t-- > 0) {
            String s = sc.next().toUpperCase();
            int n = s.length();
            String tmp = "";
            for (int i = 0; i < n; i++) {
                tmp += xuly(s.charAt(i));
            }
            int check = 0;
            for (int i = 0; i < n / 2; i++) {
                if (tmp.charAt(i) != tmp.charAt(n - i - 1)) {
                    check = 1;
                    break;
                }
            }   
            if (check == 0) System.out.println("YES");
            else System.out.println("NO");
        }
    
    }
}
