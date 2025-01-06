import java.util.*;

public class J03009_Tap_tu_rieng_cua_hai_xau {
    public static void main(String[] args) {    
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            String [] str1 = s1.split("\\s+");
            String [] str2 = s2.split("\\s+");
            Map<String, Integer> mp1 = new TreeMap<>(), mp2 = new TreeMap<>();

            for(int i = 0; i < str1.length; i++) {
                mp1.put(str1[i], 1);
            }

            for(int i = 0; i < str2.length; i++) {
                mp2.put(str2[i], 1);
            }
            mp1.forEach((key, value) -> {
                if (!mp2.containsKey(key) && mp1.get(key) == 1) {
                    System.out.print(key + " ");
                    mp1.put(key, 0);
                }
            });
            System.out.println();

        }
    }
}