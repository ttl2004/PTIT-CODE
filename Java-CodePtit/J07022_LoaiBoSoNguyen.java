import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class J07022_LoaiBoSoNguyen {
    public static boolean check(String s) {
        for (char c : s.toCharArray()) {
            if (c < '0' || c > '9') {
                return true;  // Nếu ký tự không phải số thì trả về true
            }
        }
        
        // Kiểm tra số có nằm trong phạm vi int không
        try {
            BigInteger num = new BigInteger(s);
            if (num.compareTo(BigInteger.valueOf(Integer.MIN_VALUE)) >= 0 &&
                num.compareTo(BigInteger.valueOf(Integer.MAX_VALUE)) <= 0) {
                return false;  // Nếu số nằm trong phạm vi int, trả về false
            }
        } catch (NumberFormatException e) {
            return true;  // Nếu không thể chuyển đổi thành BigInteger, trả về true
        }
        
        return true;  // Nếu không nằm trong phạm vi int
    }

    public static void main(String[] args) {
        String fileName = "DATA.in";
        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            List<String> mp = new ArrayList<>();
            String line;
            while ((line = br.readLine()) != null) {
                String[] arr = line.trim().split("\\s+");
                for (String s : arr) {
                    if (check(s)) {
                        mp.add(s);  // Thêm các chuỗi không phải số nguyên vào danh sách
                    }
                }
            }
            
            // Sắp xếp danh sách theo thứ tự tăng dần
            Collections.sort(mp);
            
            // In ra danh sách các chuỗi đã sắp xếp
            for (String s : mp) {
                System.out.print(s + " ");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}