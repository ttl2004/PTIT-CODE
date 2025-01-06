import java.util.*;
import java.io.*;
public class J07004_So_khac_nhau_trong_file_1 {
    public static void main(String[] args)  {
        //String fileName = "E://Code_Ptit//Java - codeptit//DATA.txt";
        String fileName = "DATA.in";
        try {
            BufferedReader br =  new BufferedReader(new FileReader(fileName));
            String line = "";
            int [] cnt = new int[1005];
            while ((line = br.readLine()) != null) {
                String[] s = line.split(" ");
                for (int i = 0; i < s.length; i++) {
                    cnt[Integer.parseInt(s[i])] ++;
                }
            }
            for (int i = 0; i < 1000; i++) {
                if (cnt[i] >= 1) System.out.println(i + " " + cnt[i]);
            }
        }
        catch (Exception e) {
            e.printStackTrace();
        }

    }
}