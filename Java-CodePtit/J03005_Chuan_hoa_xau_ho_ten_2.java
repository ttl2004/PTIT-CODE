import java.util.*;

public class J03005_Chuan_hoa_xau_ho_ten_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < n; i ++) {
            String s = sc.nextLine();
            s = s.trim();
            String [] str = s.split("\\s+");
            for (int j = 0; j < str.length; j++) {
                if (j == 0) {
                    str[j] = str[j].toUpperCase();
                }
                else {
                    for (int k = 0; k < str[j].length(); k ++) {
                        if (k == 0) {
                            str[j] = str[j].substring(0, 1).toUpperCase() + str[j].substring(1).toLowerCase();
                        }   
                        else str[j] = str[j].substring(0, k) + str[j].substring(k, k + 1).toLowerCase() + str[j].substring(k + 1);
                    }
                }
                if (j != 0) {
                    System.out.print(str[j]);
                    if (j != str.length - 1) System.out.print(" ");
                    else System.out.print(", ");
                }
            }
            System.out.println(str[0]);
        }
    }
}