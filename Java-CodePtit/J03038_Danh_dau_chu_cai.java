import java.util.*;
import java.math.*;
public class J03038_Danh_dau_chu_cai {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Set<Character> set = new TreeSet<>();
        for (int i = 0; i < s.length(); i++) {
            set.add(s.charAt(i));
        }
        System.out.println(set.size());
    }
}