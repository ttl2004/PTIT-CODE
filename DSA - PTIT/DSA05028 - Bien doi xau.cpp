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
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.size(), m = s2.size();
		s1 = "@" + s1;
		s2 = "#" + s2;
		int dp[n + 5][m + 5];
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i <= n; i ++) {
			for (int j = 0; j <= m; j ++) {
				if (i == 0 || j == 0) dp[i][j] = i + j;
				else if (s1[i] == s2[j]) dp[i][j] = dp[i - 1][j - 1];
				else dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
			}
		}
		cout << dp[n][m] << endl;
	}
	return 0;
}
