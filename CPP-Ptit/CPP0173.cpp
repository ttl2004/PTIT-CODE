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
ll bcn(ll a, ll b) {
	return (a*b)/__gcd(a, b);
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll x, y, z, n;
		cin >> x >> y >> z >> n;
		ll f = bcn(bcn(x, y), z);
		ll i = pow(10, n - 1), j = pow(10, n);
		if (f >= j) cout << "-1\n";
		else {
			if (i % f == 0) cout << i << endl;
			else {
				cout << (i/f + 1) * f << endl;
			}
		}
	}
	return 0;
}

