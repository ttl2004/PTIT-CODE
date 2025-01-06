import java.util.*;
import java.io.*;

public class J07002_Tinh_tong {
    public static void main(String[] args) throws IOException {
        //String FileName = "E://Code_Ptit//Java - codeptit//DATA.txt";
        String FileName  = "DATA.in";
        BufferedReader br = new BufferedReader(new FileReader(FileName));
        String line = "";
        Long sum = 0L;  // Khai báo biến sum bên ngoài vòng lặp
        while ((line = br.readLine()) != null) {
            String[] s = line.split(" ");
            for (int i = 0; i < s.length; i++) {
                try {
                    int num = Integer.parseInt(s[i]);
                    if (num >= -2147483648 && num <= 2147483647) {
                        sum += num;
                    }
                } catch (NumberFormatException e) {
                }
            }
        }
        System.out.println(sum);
        br.close();
    }
}
