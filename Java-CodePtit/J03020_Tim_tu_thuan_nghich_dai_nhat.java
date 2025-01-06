import java.util.*;

public class J03020_Tim_tu_thuan_nghich_dai_nhat {
    public static boolean isPalindrome(String s) {
        int len = s.length();
        for (int i = 0; i < len / 2; i++) {
            if (s.charAt(i) != s.charAt(len - i - 1)) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int max_len = 0;
        String max_str = "";
        Map<String, Integer> map = new TreeMap<>();
        ArrayList<String> list = new ArrayList<>();
        while (sc.hasNext()) {
            String [] a = sc.nextLine().trim().split("\\s+");
            for (String s : a) {
                if (isPalindrome(s) && s.length() > max_len) {
                    max_len = s.length();
                    max_str = s;
                }
                map.put(s, map.getOrDefault(s, 0) + 1);
                if (map.get(s) == 1) list.add(s);
            }
        }
        for (String s : list) {
            if (isPalindrome(s) && s.length() == max_len) System.out.println(s + " " + map.get(s));
        }
    }
}
