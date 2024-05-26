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
	while (t --) {
		int n, m;
		cin >> n >> m;
		int a[n + 5][m + 5];
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= m; j ++) {
				cin >> a[i][j];
			}
		}
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= m; j ++) {
				int x = 1e9, y = 1e9, z = 1e9, tmp = a[i][j];
				if (a[i - 1][j] != 0) {
					x = a[i - 1][j] + a[i][j];
				}
				if (a[i - 1][j - 1] != 0) {
					y = a[i - 1][j - 1] + a[i][j];
				}
				if (a[i][j - 1] != 0) {
					z = a[i][j - 1] + a[i][j];
				}
				a[i][j] = min(x, min(y, z));
				if (a[i][j] == 1e9) {
					a[i][j] = tmp;
				}
			}
		}
		cout << a[n][m] << endl;
	}
	return 0;
}
