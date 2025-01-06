import java.util.*;

public class J08024_So_0_va_9 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            long n = sc.nextLong();
            Queue<Long> q = new LinkedList<>();
            q.add(9L);
            while (!q.isEmpty()) {
                long t = q.poll();
                if (t % n == 0) {
                    System.out.println(t);
                    break;
                }
                q.add(t * 10 + 0);
                q.add(t * 10 + 9);
            }
        }
    }
}
