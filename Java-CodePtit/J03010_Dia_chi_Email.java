import java.util.*;
import java.math.*;
public class J03010_Dia_chi_Email {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        Map<String, Integer> m = new HashMap<>();
        while(t-->0){
            String s = sc.nextLine();
            s = s.trim();
            String[] arr = s.split("\\s+");
            Vector<String> v = new Vector<>();
            for (int i = 0; i < arr.length; i++) {
                arr[i] = arr[i].toLowerCase();
                v.add(arr[i]);
            }
            String ans = "";
            ans += v.get(v.size() - 1);
            for (int i = 0; i < v.size() - 1; i++) {
                ans += v.get(i).charAt(0);
            }
            if (!m.containsKey(ans)) {
                m.put(ans, 1);
                System.out.println(ans + "@ptit.edu.vn");
            }
            else {
                m.put(ans, m.get(ans) + 1);
                System.out.println(ans + m.get(ans) + "@ptit.edu.vn");
            }
        }
    }
}