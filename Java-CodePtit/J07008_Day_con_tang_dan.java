import java.util.*;
import java.io.*;

public class J07008_Day_con_tang_dan {
    static ArrayList<String> res = new ArrayList<>();

    public static void Try(int[] a, int n, String s, String x, String y, int cnt, int index) {
        if (index == n) { 
            if (cnt >= 2) { 
                String tmp = "";
                int dem = 0;
                int last = -1;
                boolean isIncreasing = true;

                for (int i = 0; i < s.length(); i++) {
                    if (s.charAt(i) == '1') {
                        if (last != -1 && a[i] <= last) {
                            isIncreasing = false;
                            break;
                        }
                        last = a[i];
                        tmp += Integer.toString(a[i]);
                        dem++;
                        if (dem != cnt) tmp += " ";
                    }
                }

                if (isIncreasing) {
                    res.add(tmp);
                }
            }
            return;
        }
        Try(a, n, s + x, x, y, cnt, index + 1);
        Try(a, n, s + y, x, y, cnt + 1, index + 1);
    }

    public static void main(String[] args) {
        //String fileName = "E://Code_Ptit//Java - codeptit//DATA.txt";
        String fileName = "DAYSO.in";

        try {
            BufferedReader br = new BufferedReader(new FileReader(fileName));
            int n = Integer.parseInt(br.readLine());
            int[] a = new int[n];
            String line = br.readLine();
            String[] arr = line.trim().split("\\s+");
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(arr[i]);
            }

            Try(a, n, "", "0", "1", 0, 0); 
            Collections.sort(res);
            for (String s : res) {
                System.out.println(s);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
