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
ll reverse(ll n) {
	ll m = n, so = 0;
	while (m > 0) {
		so = so * 10 + m % 10;
		m /= 10;
	}
	return so;
}
ll pow(ll n, ll k)
{
    if (k == 0) return 1;
    ll x = pow(n, k / 2);
    if (k % 2 == 0) return (x * x) % mod;
    else return (((x * x) % mod) * n) % mod;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		ll n, k;
		cin >> n;
		k = reverse(n);
		cout << pow(n, k) << endl;
	}

	return 0;
}
