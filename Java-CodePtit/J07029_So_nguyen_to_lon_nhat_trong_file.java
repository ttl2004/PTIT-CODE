import java.util.*;
import java.io.*;


public class J07029_So_nguyen_to_lon_nhat_trong_file {
    static int []check = new int[1000005];
    public static void sang(){
        check[0] = check[1] = 1;
        for(int i = 2; i <= 1000; i++){
            if(check[i] == 0){
                for(int j = i*i; j <= 1000000; j += i){
                    check[j] = 1;
                }
            }
        }
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        sang();
        ObjectInputStream ob = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> a = (ArrayList<Integer>) ob.readObject();
        ArrayList<Integer> b = new ArrayList<>();
        Map<Integer, Integer> mp = new TreeMap<>();

        for (Integer x : a) {
            if(check[x] == 0){
                mp.put(x, mp.getOrDefault(x, 0) + 1);
            }
        }
        
        for (Map.Entry<Integer, Integer> x : mp.entrySet()) {
            b.add(x.getKey());
        }

        int cnt = 0;
        for (int i = b.size() - 1; i >= 0; i--) {
            if(cnt == 10) break;
            System.out.println(b.get(i) + " " + mp.get(b.get(i)));
            cnt++;
        }
    }
}

