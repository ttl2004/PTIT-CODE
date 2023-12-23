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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
	    cin >> n;
	    ll a[n + 5], b[n + 5];
	    vector<ll> dp(n + 5, 1);
	    for (int i = 0; i < n; i++) cin >> a[i];
	    ll _max = 0, index = 0;
	    for (int i = 0; i < n; i++) {
	        for (int j = 0; j < i; j++) {
	            if (a[i] > a[j] ) {
	                dp[i] = max(dp[i], dp[j]  + 1);
	            }
	        }
	        if (_max < dp[i]) {
	            _max = dp[i];
	        }
	    }
	    cout << _max << endl;
	}
	return 0;
}

