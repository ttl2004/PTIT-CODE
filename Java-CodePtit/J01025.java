import java.util.*;
public class J01025 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();
        int x3 = sc.nextInt();
        int y3 = sc.nextInt();  
        int x4 = sc.nextInt();
        int y4 = sc.nextInt();

        int canh = Math.max((Math.max(x4, x2) - Math.min(x1, x3)), (Math.max(y4, y2) - Math.min(y1, y3)));
        System.out.println(canh * canh);
    }
}