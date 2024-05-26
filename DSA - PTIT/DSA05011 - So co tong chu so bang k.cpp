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
const int mod = 1e9 + 7;
int dp[105][50005];
void sang() {
	memset(dp, 0, sizeof(dp));
	for (int j = 1; j <= 9; j ++) dp[1][j] = 1;
	for (int i = 2; i <= 100; i ++) {
		for (int s = 0; s <= 9; s ++) {
			for (int j = s; j <= 50000; j ++) {
				dp[i][j] += dp[i - 1][j - s];
				dp[i][j] %= mod;
			}
		}
	}
}
__Tieu_Long__{
	Fast();
	sang();
	Tests() {
		int n, k;
		cin >> n >> k;
		cout << dp[n][k] << endl;
	}
	return 0;
}
