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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 5][n + 5];
		int hang[n + 5] = {0}, cot[n + 5] = {0}, _max = 0, kt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n ; j ++) {
				cin >> a[i][j];
				hang[i] += a[i][j];
			}
			if (hang[i] > _max) {
				_max = hang[i];
				kt = 1;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j ++) {
				cot[i] += a[j][i];
			}
			if (cot[i] > _max) {
				_max = cot[i];
				kt = 0;
			}
		}
		int res = 0;
		if (kt) {
			for (int i = 0; i < n; i ++) {
				res += _max - hang[i];
			}
		}
		else {
			for (int i = 0; i< n; i ++) {
				res += _max - cot[i];
			}
		}
		cout << res << endl;
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
