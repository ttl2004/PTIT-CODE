import java.util.*;
public class J02008_Boi_so_nho_nhat_cua_N_so_nguyen_duong_dau_tien {
    public static long gcd(long a, long b){
        if(b == 0) return a;
        return gcd(b, a%b);
    }
    public static long BCN(long a, long b) {
        return (a * b)/gcd(a, b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextInt();
            long ans = 1;
            for(long i = 2; i <= n; i++){
                ans = BCN(ans, i);
            }
            System.out.println(ans);
        }
    }
}