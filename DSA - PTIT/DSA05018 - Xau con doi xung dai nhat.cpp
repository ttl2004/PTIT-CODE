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
		string s;
		cin >> s;
		int ans = 1, n = s.size();
		int dp[1000 + 5][1000 + 5];
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; i ++) dp[i][i] = 1;
		for (int len = 2; len <= n; len ++) {
			for (int i = 0; i < n; i ++) {
				int j = i + len - 1;
				if (j < n) {
					if (len == 2 && s[i] == s[j]) dp[i][j] = 1;
					else if (len > 2 && dp[i + 1][j - 1] && s[i] == s[j]) dp[i][j] = 1;
					if (dp[i][j]) ans = max(ans, j - i + 1);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
