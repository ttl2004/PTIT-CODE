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
int n;
vector<vector<ll>> nhan(vector<vector<ll>> a, vector<vector<ll>> b) {
	vector<vector<ll>> c (2, vector<ll> (2));
	for (ll i = 0; i < 2; i ++) {
		for (ll j = 0; j < 2; j ++) {
			c[i][j] = 0;
			for (ll f = 0; f < 2; f ++) {
				c[i][j] += ((a[i][f] % mod) * (b[f][j] % mod)) % mod;
				c[i][j] %= mod;
			}
		}
	}
	return c;
}
vector<vector<ll>> Pow(ll b, vector<vector<ll>> a) {
	int k = b;
	vector<vector<ll>> res(3, vector<ll> (3));
	for (ll i = 0; i < 2 ; i ++) {
		for (ll j = 0; j < 2; j ++) {
			res[i][j] = (i == j);
		}
	}
	while (k > 0) {
		if (k % 2 == 1) {
			res = nhan(res, a);
		}
		a = nhan(a, a);
		k /= 2;
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
    	cin >> n;
    	vector<vector<ll>> matrix(3, vector<ll> (3));
    	
    	matrix[0][0] = 1;
    	matrix[0][1] = 1;
    	matrix[1][0] = 1;
    	matrix[1][1] = 0;
		
		vector<vector<ll>> kq = Pow(n - 1, matrix);
		cout << kq[0][0] << endl;
	}
	return 0;
}
