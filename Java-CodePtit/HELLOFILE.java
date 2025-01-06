import java.util.*;
import java.io.*;

public class HELLOFILE{
    public static void main(String[] args) {
        //String fileName = "E://Code_Ptit//Java - codeptit//Java_test//input.txt";
        String fileName = "Hello.txt";
        try{
            BufferedReader br = new BufferedReader(new FileReader(fileName));
            String line = "";
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
        }catch(IOException e) {
            e.printStackTrace();
        }
    }
}