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
	cin >>t;
	while (t--) {
		ll n;
		cin >> n;
		ll a[n + 5],  dp[n + 5];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			dp[i] = a[i];
		}
		dp[1] = max(a[0], a[1]);
		ll _max = max(dp[1], dp[0]);
		for (int i = 2; i < n; i++) {
			dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
			_max = max(dp[i], _max);
		}
		cout << _max << endl;
	}

	return 0;
}
