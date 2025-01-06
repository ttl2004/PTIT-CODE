import java.util.*;
import java.io.*;
public class J07001_Doc_file_van_ban {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //String fileName = "E://Code_Ptit//Java - codeptit//DATA.txt";
        String fileName = "DATA.in";
        try {
            BufferedReader br = new BufferedReader(new FileReader(fileName));
            String line = "";
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}