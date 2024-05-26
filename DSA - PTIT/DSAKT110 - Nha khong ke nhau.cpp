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
		ll a[n + 5], dp[n + 5];
		for (int i = 1; i <= n; i ++) cin >> a[i];
		dp[0] = 0;
		dp[1] = a[1]; dp[2] = a[2];
		ll _max = max(dp[1], dp[2]);
		for (int i = 3; i <= n; i ++) {
			dp[i] = max(a[i], max(dp[i - 2] + a[i], dp[i - 3] + a[i]));
			_max = max(_max, dp[i]);
		}
		cout << _max << endl;
	}
	return 0;
}
