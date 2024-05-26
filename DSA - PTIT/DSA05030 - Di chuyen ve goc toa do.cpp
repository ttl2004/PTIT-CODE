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
		int n, m;
		cin >> n >> m;
		ll dp[n + 5][m + 5];
		dp[n][m] = 0;
		for (int i = 0; i <= m - 1; i ++) dp[n][i] = 1;
		for (int i = 0; i <= n - 1; i ++) dp[i][m] = 1;
		for (int i = n - 1; i >= 0; i --) {
			for (int j = m - 1; j >= 0; j --) {
					dp[i][j] = dp[i + 1][j] + dp[i][j + 1];
			}
		}
		cout << dp[0][0] << endl;
	}
	return 0;
}