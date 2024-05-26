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

ll _min = 1e9;
void Try(ll pos, ll n, ll s, ll a[], ll cnt) {
	  if (s == 0) {
        _min = min(_min, cnt);
        return;
    }
    if (pos >= n || s < 0) return;
    Try(pos + 1, n, s - a[pos], a , cnt + 1);
    Try(pos + 1, n, s, a, cnt);
}
__Tieu_Long__{
	Fast();
	Tests() {
		ll n, s;
		cin >> n >> s;
		ll a[n + 5];
		for (int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n, [] (ll x, ll y) {
			return x > y;
		});
		Try(0, n, s, a, 0);
    if (_min == 1e9) cout << "-1\n";
    else cout << _min << endl;
    _min = 1e9;
	}
	return 0;
}