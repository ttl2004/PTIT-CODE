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
		int n, m, k;
		cin >> n >> m >> k;
		string a, b, c;
		cin >> a >> b >> c;
		a = "@" + a;
		b = "#" + b;
		c = "%" + c;
		int dp[105][105][105];
		for (int i = 0; i <= n; i ++) {
			for (int j = 0; j <= m; j ++) {
				for (int f = 0; f <= k; f ++) {
					if (i == 0 || j == 0 || f == 0) dp[i][j][f] = 0;
					else {
						if (a[i] == b[j] && a[i] == c[f]) {
							dp[i][j][f] = dp[i - 1][j - 1][f - 1] + 1;
						}
						else dp[i][j][f] = max(dp[i - 1][j][f], max(dp[i][j - 1][f], dp[i][j][f - 1]));
					}
				}
			}
		}
		cout << dp[n][m][k] << endl;
	}
	return 0;
}
