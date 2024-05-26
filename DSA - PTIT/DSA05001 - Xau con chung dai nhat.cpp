#include <bits/stdc++.h>
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
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string a, b;
		cin >> a >> b;
		int n = a.size(), m = b.size();
		a = "@" + a;
		b = "#" + b;
		int dp[1005][1005];
		for (int i = 0; i <= n; i ++) {
			for (int j = 0; j <= m; j ++) {
				if (i == 0 || j == 0) dp[i][j] = 0;
				else {
					if (a[i] == b[j]) {
						dp[i][j] = dp[i - 1][j - 1] + 1;
					}
					else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
				}
			}
		}
		cout << dp[n][m] << endl;
	}
	return 0;
}
