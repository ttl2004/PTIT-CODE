import java.util.*;
import java.math.*;
import java.io.*;

public class J07005_So_khac_nhau_trong_file_2{
    public static void main(String[] args) throws IOException {
        DataInputStream in = new DataInputStream(new FileInputStream("DATA.IN"));

        Map<Integer, Integer> map = new TreeMap<>();

        for (int i = 0; i < 100000; i ++) {
            int x = in.readInt();
            if (map.containsKey(x)) {
                map.put(x, map.get(x) + 1);
            }
            else {
                map.put(x, 1);
            }
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
        
    }
}
