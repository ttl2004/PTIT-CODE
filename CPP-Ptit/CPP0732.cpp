#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
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
	while (t--) {
		ll n;
		cin >> n;
		ll a[n + 5];
		pair<ll,ll> dp[n + 5];
		ll _max = 0;
		for (ll i = 0; i <n; i++) {
			cin >> a[i];
			_max = max(a[i], _max);
			dp[i].first = 1;
			dp[i].second = a[i];
		}
		for (ll i = 0; i < n; i ++) {
			for (ll j = 0; j < i; j ++) {
				if (a[i] > a[j] && dp[i].first < dp[j].first  + 1) {
					dp[i].first = dp[j].first + 1;
					dp[i].second = max(dp[j].second + a[i], dp[i].second);
				}
			}
			_max = max(_max, dp[i].second);
		}
		cout << _max << endl;
	}

	return 0;
}
