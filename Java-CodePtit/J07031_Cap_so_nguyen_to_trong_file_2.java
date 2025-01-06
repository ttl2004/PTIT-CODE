import java.util.*;
import java.io.*;

public class J07031_Cap_so_nguyen_to_trong_file_2 {
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
        ObjectInputStream ob1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ob2 = new ObjectInputStream(new FileInputStream("DATA2.in"));

        ArrayList<Integer> a = (ArrayList<Integer>) ob1.readObject();
        ArrayList<Integer> b = (ArrayList<Integer>) ob2.readObject();
        
        Set<Integer> setA = new HashSet<>(a);
        Set<Integer> setB = new HashSet<>(b);
        
        TreeSet<Integer> primesA = new TreeSet<>();
        
        for (Integer x : setA) {
            if (check[x] == 0 && !setB.contains(x)) {
                primesA.add(x);
            }
        }
        
        for (Integer n : primesA) {
            int m = 1000000 - n;
            if (m > n && primesA.contains(m)) {
                System.out.println(n + " " + m);
            }
        }
    }
}