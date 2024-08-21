import java.util.*;
import java.math.*;
public class J03032_Dao_tu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s = sc.nextLine();
            String [] str = s.split("\\s+");
            for(int i = 0; i < str.length; i++) {
                StringBuilder sb = new StringBuilder(str[i]);
                String s1 = sb.reverse().toString();
                System.out.print(s1 + " ");
            }
            System.out.println();
        }
    }
}