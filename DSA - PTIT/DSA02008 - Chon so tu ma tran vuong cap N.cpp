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
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t --) {
		ll n, k;
		cin >> n >> k;
		ll a[n + 5][n + 5], arr[n + 5];
		for (int i = 1; i <= n; i ++) {
			arr[i] = i;
			for (int j = 1; j <= n; j ++) {
				cin >> a[i][j];
			}
		}
		vector<string> kq;
		do{
			ll s = 0;
			string str;
			for (int i = 1; i <= n; i ++) {
				s += a[i][arr[i]];
				str += to_string(arr[i]) + " ";
			}
			if (s == k) {
				kq.pb(str);
			}
		}while (next_permutation(arr + 1, arr + 1 + n));
		cout << kq.size() << endl;
		for (auto x : kq) cout << x << endl;
	}
	return 0;
}
