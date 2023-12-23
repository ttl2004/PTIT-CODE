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
const ll mod = 1e9 + 7;
ll pow(ll a, ll b) {
	ll ret  = 1;
	a %= mod;
	b %= mod - 1;
	while (b > 0) {
		if (b  % 2 == 1) {
			ret = (ret * a) % mod;
		}
		a = (a * a) % mod;
		b /= 2;
	}
	return ret;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n, x;
		cin >> n >> x;
		if (n == 0){
			cout << 0 << endl;
			continue;
		}
		ll a[n + 5];
		ll ret = 0;
		for (ll i = n - 1; i >= 0; i--) cin >> a[i];
		for (ll i = n - 1; i >= 0; i--) {
			ret += a[i] * pow(x,i);
			ret %= mod;
		}
		cout << ret << endl;
	}
	return 0;
}

