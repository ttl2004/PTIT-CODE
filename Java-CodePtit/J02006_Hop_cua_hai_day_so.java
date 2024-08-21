import java.util.*;
public class J02006_Hop_cua_hai_day_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        Set<Integer> set = new TreeSet<>();
        for (int i = 0; i < n; i++) {
            set.add(sc.nextInt());
        }
        for (int i = 0; i < m; i++) {
            set.add(sc.nextInt());
        }
        for (int num : set) {
            System.out.print(num + " ");
        }
    }
}