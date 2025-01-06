import java.util.*;
class Pair {
    long first;
    int second;

    Pair(long first, int second) {
        this.first = first;
        this.second = second;
    }
}
public class J08026_Bien_doi_S_T {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        
        while (k-- > 0) {
            long s = sc.nextLong();
            long t = sc.nextLong();
            
            if (s >= t) {
                System.out.println(s - t);
            } 
            else {
                Map<Long, Integer> mp = new HashMap<>();
                Queue<Pair> qe = new LinkedList<>();

                qe.offer(new Pair(s - 1, 1));
                qe.offer(new Pair(s * 2, 1));
                mp.put(s - 1, 1);
                mp.put(s * 2, 1);
                
                while (!qe.isEmpty()) {
                    Pair current = qe.poll();
                    
                    if (current.first == t) {
                        System.out.println(current.second);
                        break;
                    }
                    
                    if (current.first * 2 <= t + 1 && !mp.containsKey(current.first * 2) && current.first * 2 != 0) {
                        qe.offer(new Pair(current.first * 2, current.second + 1));
                        mp.put(current.first * 2, current.second + 1);
                    }
                    
                    if (current.first - 1 > 0 && !mp.containsKey(current.first - 1)) {
                        qe.offer(new Pair(current.first - 1, current.second + 1));
                        mp.put(current.first - 1, current.second + 1);
                    }
                }
            }
        }
    }
}