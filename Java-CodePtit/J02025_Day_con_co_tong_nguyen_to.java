import java.util.*;

public class J02025_Day_con_co_tong_nguyen_to{
	static Vector<String> res = new Vector<>();
	public static int check (int n) {
		if (n < 2) return 0;
		for (int i = 2; i * i <= n; i ++) {
			if (n % i == 0) {
				return 0;
			}
		}
		return 1;
	}

	public static void Try(int pos, int n, Vector<Integer> tmp, Integer [] a, int s) {
		if (pos == n) {
			if (check(s) == 1) {
				String ans = "";
				for (int i = 0; i < tmp.size(); i ++) {
					ans += tmp.get(i) + " ";
				}
				res.add(ans);
			}
		}
		else{
			Try(pos + 1, n, tmp, a, s);
			tmp.add(a[pos]);
			Try(pos + 1, n, tmp, a, s + a[pos]);
			tmp.remove(tmp.size() - 1);
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		while (t -- > 0) {
			int n = sc.nextInt();
			Integer [] a = new Integer [n + 1];
			for (int  i = 0; i < n; i ++) { 
				a[i] = sc.nextInt();
			}
			Arrays.sort(a, 0,  n, Collections.reverseOrder());
			Vector<Integer> tmp = new Vector<>();
			Try(0, n, tmp, a, 0);
			for (int i = 0; i < res.size(); i ++) {
				System.out.println(res.get(i));
			}
			res.clear();
		}
	}
}