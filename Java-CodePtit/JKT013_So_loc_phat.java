import java.util.*;

public class JKT013_So_loc_phat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            Vector<String> v = new Vector<>();
            Queue<String> q = new LinkedList<>();
            q.add("6");
            q.add("8");
            while (!q.isEmpty()) {
                if (q.peek().length() > n) break;
                String s = q.peek();
                v.add(q.peek());
                q.poll();
                
                q.add(s + "6");
                q.add(s + "8"); 
            }
            int k = v.size();
            System.out.println(k);
            for (int i = k - 1; i >= 0; i--) {
                System.out.print(v.get(i) + " ");
            }
            System.out.println();
        }
    }
}
