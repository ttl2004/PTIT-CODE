#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
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
const int mod = 1e9 + 7;
int n, k;
vector<vector<ll>> nhan(vector<vector<ll>> a, vector<vector<ll>> b) {
	vector<vector<ll>> c (n + 1, vector<ll> (n + 1));
	for (ll i = 0; i < n; i ++) {
		for (ll j = 0; j < n; j ++) {
			c[i][j] = 0;
			for (ll f = 0; f < n; f ++) {
				c[i][j] += ((a[i][f] % mod) * (b[f][j] % mod)) % mod;
				c[i][j] %= mod;
			}
		}
	}
	return c;
}
vector<vector<ll>> Pow(ll b, vector<vector<ll>> a) {
	vector<vector<ll>> res(n + 1, vector<ll> (n + 1));
	for (ll i = 0; i < n ; i ++) {
		for (ll j = 0; j < n; j ++) {
			res[i][j] = (i == j);
		}
	}
	while (b > 0) {
		if (b % 2 == 1) {
			res = nhan(res, a);
		}
		a = nhan(a, a);
		b /= 2;
	}
	return res;
}
__Tieu_Long__{
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
    	cin >> n >> k;
    	vector<vector<ll>> matrix(n + 1, vector<ll> (n + 1));
    	
    	for (ll i = 0; i < n; i ++) {
    		for (ll j = 0; j < n; j ++) {
    			cin >> matrix[i][j];
			}
		}
		
		vector<vector<ll>> kq = Pow(k, matrix);
		for (ll i = 0; i < n; i ++) {
			for (ll j = 0; j < n; j ++) {
				cout << kq[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
