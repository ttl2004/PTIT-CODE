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
//
const ll mod = 1e9 + 7;
ll C[1005][1005];
void Tohop() {
	for (int i = 0; i <= 1001; i++) C[i][0] = 1;
    for (int i = 0; i <= 1001; i++) C[i][i] = 1;
    for (int i = 1; i <= 1001; i++) {
        for (int j = 1; j < i; j++) {
            C[i][j] = (C[i - 1][j - 1] % mod + C[i- 1][j] % mod) % mod;
        }
    }
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	Tohop();
	int t;
	cin >> t;
	while (t --) {
		// Su dung cong thuc P(n , k) = C(n, k) * k!
		ll n, k;
		cin >> n >> k;
		ll f = C[n][k];
		ll h = 1;
		for (int i = 1; i <= k; i ++) {
			h = (h % mod * i % mod) % mod;
		}
		cout << (f % mod * h % mod) % mod << endl;
	}
	return 0;
}
