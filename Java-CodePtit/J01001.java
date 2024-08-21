import java.util.*;
public class J01001 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        if (n <= 0 || m <= 0) System.out.print("0");
        else {
            System.out.print(((n + m) * 2) +" "+ (n * m));
        }
    }
}