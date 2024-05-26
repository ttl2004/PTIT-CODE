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
const ll mod = 1e9 + 7;
ll poww(ll x, ll y) {
	x %= mod;
	y %= mod - 1;
	ll res = 1;
	while (y > 0) {
		if (y % 2 == 1) {
			res *= x;
			res %= mod;
		}
		x *= x;
		x %= mod;
		y /= 2;
	}
	return res;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	while (true) {
		ll a, b;
		cin >> a >> b;
		if (!a && !b) break;
		cout << poww(a, b) << endl;
	}

	return 0;
}
