import java.util.*;
import java.io.*;

public class J07006_So_khac_nhau_trong_file_3 {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ob = new ObjectInputStream(new FileInputStream("DATA.in"));

        ArrayList<Integer> a = (ArrayList<Integer>) ob.readObject();
        Map<Integer, Integer> map = new TreeMap<>();

        for (int i = 0; i < a.size(); ++i) {
            if (map.containsKey(a.get(i))) {
                map.put(a.get(i), map.get(a.get(i)) + 1);
            } else {
                map.put(a.get(i), 1);
            }
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() > 0) {
                System.out.println(entry.getKey() + " " + entry.getValue());
            }
        }
    }
}