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
		int n;
		cin >> n;
		ll a[n + 5];
		pair<int, ll> dp[n + 5];
		for (int i = 0; i < n; i ++) cin >> a[i];
		ll _max = 0;
		for (int i = 0; i < n; i ++) {
			dp[i].fi = 1;
			dp[i].second = a[i];
			for (int j = 0; j < i; j ++) {
				if (a[i] > a[j] && dp[i].fi < dp[i].fi + 1) {
					dp[i].fi = dp[j].fi + 1;
					dp[i].se = max(dp[j].se + a[i], dp[i].se);
				}
			}
			_max = max(_max, dp[i].se);
		}
		cout << _max << endl;
		
	}
	return 0;
}
