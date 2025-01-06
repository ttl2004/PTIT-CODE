import java.util.*;

class Pair {
    ArrayList<Long> first;
    int second;

    Pair(ArrayList<Long> first, int second) {
        this.first = first;
        this.second = second;
    }
}

public class J08025_Quay_hinh_vuong {

    public static ArrayList<Long> Xoay_Trai(ArrayList<Long> tmp) {
        ArrayList<Long> a = new ArrayList<>(tmp);
        long tmp1 = a.get(0);
        a.set(0, a.get(3));
        long tmp2 = a.get(1);
        a.set(1, tmp1);
        tmp1 = a.get(4);
        a.set(4, tmp2);
        a.set(3, tmp1);
        return a;
    }

    public static ArrayList<Long> Xoay_Phai(ArrayList<Long> tmp) {
        ArrayList<Long> a = new ArrayList<>(tmp);
        long tmp1 = a.get(1);
        a.set(1, a.get(4));
        long tmp2 = a.get(2);
        a.set(2, tmp1);
        tmp1 = a.get(5);
        a.set(5, tmp2);
        a.set(4, tmp1);
        return a;
    }

    public static void solve(Scanner sc) {
        ArrayList<Long> a = new ArrayList<>();
        ArrayList<Long> b = new ArrayList<>();

        for (int i = 0; i < 6; i++) a.add(sc.nextLong());
        for (int i = 0; i < 6; i++) b.add(sc.nextLong());

        Map<ArrayList<Long>, Boolean> mp = new HashMap<>();
        
        Queue<Pair> qe = new LinkedList<>();
        
        qe.offer(new Pair(a, 0));
        mp.put(a, true);
        
        while (!qe.isEmpty()) {
            Pair tmp = qe.poll();
        
            if (tmp.first.equals(b)) {
                System.out.println(tmp.second);
                break;
            }

            ArrayList<Long> x = Xoay_Trai(tmp.first);
            ArrayList<Long> y = Xoay_Phai(tmp.first);

            if (!mp.containsKey(x)) {
                qe.offer(new Pair(x, tmp.second + 1));
                mp.put(x, true);
            }
            if (!mp.containsKey(y)) {
                qe.offer(new Pair(y, tmp.second + 1));
                mp.put(y, true);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        
        while (t-- > 0) {
            solve(sc);
        }

    }
}


