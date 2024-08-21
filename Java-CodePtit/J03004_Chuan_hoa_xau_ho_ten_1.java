import java.util.*;
public class J03004_Chuan_hoa_xau_ho_ten_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0) {
            String s = sc.nextLine();
            s = s.trim();
            String [] arr = s.split("\\s+");
            for (int i = 0; i < arr.length; i++) {
                for (int j = 0; j < arr[i].length(); j++) {
                    if (j == 0) {
                        arr[i] = arr[i].substring(0, 1).toUpperCase() + arr[i].substring(1).toLowerCase();
                    }   
                    else arr[i] = arr[i].substring(0, j) + arr[i].substring(j, j + 1).toLowerCase() + arr[i].substring(j + 1);
                }
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
}