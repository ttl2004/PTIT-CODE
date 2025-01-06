import java.io.*;
import java.util.*;
public class J07016_So_nguyen_to_trong_hai_file_nhi_phan {
    static int [] check = new int[1000000];

    public static void Sang() {
        check[0] = check[1] = 1;
        for (int i = 2; i < 1000000; i++) {
            if (check[i] == 0) {
                for (int j = i * 2; j < 1000000; j += i) {
                    check[j] = 1;
                }
            }
        }
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException{
        Sang();

        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));

        ArrayList<Integer> a = (ArrayList<Integer>) in1.readObject();
        ArrayList<Integer> b = (ArrayList<Integer>) in2.readObject();
        Map<Integer, Integer> map = new TreeMap<>();
        Map<Integer, Integer> map1 = new TreeMap<>();

        for (Integer x : a) {
            if (check[x] == 0) {
                if (map.containsKey(x)) {
                    map.put(x, map.get(x) + 1);
                } else {
                    map.put(x, 1);
                }
            }
        }

        for (Integer x : b) {
            if (check[x] == 0) {
                if (map1.containsKey(x)) {
                    map1.put(x, map1.get(x) + 1);
                } else {
                    map1.put(x, 1);
                }
            }
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (map1.containsKey(entry.getKey())) {
                System.out.println(entry.getKey() + " " + entry.getValue() + " " + map1.get(entry.getKey()));
            }
        }

    }
}
