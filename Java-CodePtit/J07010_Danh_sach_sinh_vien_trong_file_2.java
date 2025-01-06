import java.util.*;
import java.io.*;
public class J07010_Danh_sach_sinh_vien_trong_file_2 {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new FileReader("SV.in"));

        int n = Integer.parseInt(in.readLine());

        for (int i = 0; i < n; i ++) {
            String msv = "B20DCCN0";
            if (i + 1 < 10) {
                msv += "0";
            }
            msv += (i + 1);
            String name = in.readLine();
            String className = in.readLine();
            String []s = in.readLine().trim().split("/");
            String date = String.format("%02d/%02d/%04d", Integer.parseInt(s[0]), Integer.parseInt(s[1]), Integer.parseInt(s[2]));
            String gpa = String.format("%.2f",  Double.parseDouble(in.readLine()));

            System.out.println(msv + " " + name + " " + className + " " + date + " " + gpa);

        }
    }
}
