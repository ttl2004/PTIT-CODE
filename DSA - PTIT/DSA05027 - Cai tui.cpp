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
		int n, v;
		cin >> n >> v;
		pair<int, int> pa[n + 5];
		for (int i = 1; i <= n; i ++) {
			cin >> pa[i].fi;
		}
		for (int i = 1; i <= n; i ++) {
			cin >> pa[i].se;
		}
		int dp[n + 5][v + 5];
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= v; j ++) {
				dp[i][j] = dp[i - 1][j];
				if (j >= pa[i].fi) {
					dp[i][j] = max(dp[i][j], dp[i - 1][j - pa[i].fi] + pa[i].se);
				}
			}
		}
		cout << dp[n][v] << endl;
	}
	return 0;
}
