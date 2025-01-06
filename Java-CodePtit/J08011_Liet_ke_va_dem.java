import java.util.*;

class Number{
    public String number;
    public Integer count, index;

    public Number(String number, Integer count, Integer index){
        this.number = number;
        this.count = count;
        this.index = index;
    }

    public String toString(){
        return number + " " + count;
    }
}
public class J08011_Liet_ke_va_dem {
    public static int check(String s) {
        int len = s.length();
        for (int i = 1; i < len; i++) {
            if (s.charAt(i) < s.charAt(i - 1)) return 0;
        }
        return 1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map <String, Integer> map = new TreeMap<>();
        ArrayList<String> list = new ArrayList<>();

        while (sc.hasNext()) {
            String [] a = sc.nextLine().trim().split("\\s+");
            int index = 0;
            for (String s : a) {
                if (check(s) == 1) {
                    map.put(s, map.getOrDefault(s, 0) + 1);
                    if (map.get(s) == 1) list.add(s);
                }
            }
        }

        ArrayList<Number> ans = new ArrayList<>();

        for (String n : list) {
            ans.add(new Number(n, map.get(n), list.indexOf(n)));
        }

        Collections.sort(ans, new Comparator<Number>(){
            public int compare(Number a, Number b){
                if (a.count != b.count) return b.count - a.count;
                return a.index - b.index;
            }
        });
        for (Number n : ans) {
            System.out.println(n);
        }
    }
}
