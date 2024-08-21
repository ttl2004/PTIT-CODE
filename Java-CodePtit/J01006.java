import java.util.*;
public class J01006 {
    static long []fb = new long[1000];
    public static void fibo() {
        fb[0] = 0;
        fb[1] = 1;
        for(int i = 2; i < 93; i++) {
            fb[i] = fb[i - 1] + fb[i - 2];
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        fibo();
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            System.out.println(fb[n]);
        }
    }
}