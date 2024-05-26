#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
#define Fast(); ios_base :: sync_with_stdio (0); cin.tie(0); cout.tie(0);
#define Tests() int t; cin >> t; while (t --)
#define Test() int t = 1; while (t --)
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
using namespace std;
/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
*/
//ABCDEFGHIJKLMNOPQRSTUVWXYZ

__Tieu_Long__{
	Fast();
	Tests() {
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		int dp[n + 5];
		dp[1] = x;
		for (int i = 2; i <= n; i ++) {
			/*
			- Nếu chuỗi i có độ dài chẵn thì có 2 cách là:
			+ Chèn 1 ký tự vào chuỗi i - 1 
			+ Nhân đôi ký tự trong chuỗi i/2
			- Nếu chuỗi i có độ dài lẻ thì có 2 cách là:
			+ Chèn 1 ký tự vào chuỗi i - 1 
			+ Nhân đôi và xoá 1 ký tự trong chuỗi (i + 1)/2
			*/
			if (i % 2 == 0) dp[i] = min(dp[i - 1] + x, dp[i /2] + z);
			else dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
		} 
		cout << dp[n] << endl;
	}
	return 0;
}
