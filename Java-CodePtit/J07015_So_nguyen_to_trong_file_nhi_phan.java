import java.io.*;
import java.util.*;
import java.math.*;
public class J07015_So_nguyen_to_trong_file_nhi_phan {
    static int []check = new int[1000005];
    public static void Sang(){
        check[0] = check[1] = 1;
        for(int i = 2; i <= 1000000; i++){
            if(check[i] == 0){
                for(int j = i * 2; j <= 1000000; j += i){
                    check[j] = 1;
                }
            }
        }
    }
    public static void main(String[] args) throws IOException,  ClassNotFoundException{
        ObjectInputStream fi = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        Sang();

        ArrayList<Integer> a = (ArrayList<Integer>) fi.readObject();
        Map<Integer, Integer> mp = new TreeMap<>();

        for(int x : a){
            if(check[x] == 0){
                if (mp.containsKey(x)) mp.put(x, mp.get(x) + 1);
                else mp.put(x, 1);
            }
        }

        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
        fi.close();

    }
}
