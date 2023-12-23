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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n + 5][m + 5], b[n + 5][m + 5];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) cin >> a[i][j];
		}
		int hang = n, cot = m, j = 1, k = 1;
		while (k <= n * m) {
			for (int i = j; i <= cot; i++) {
				cout << a[j][i] << " ";
				k++;
			}
			for (int i = j + 1; i <= hang; i++) {
				cout << a[i][cot] << " ";
				k++;
			}
			if (j != hang) {
				for (int i = cot - 1; i >= j; i--) {
					cout << a[hang][i] << " ";
					k++;
				}
			}
			if (j != cot) {
				for (int i = hang - 1; i > j; i--) {
					cout << a[i][j] << " ";
					k++;
				}
			}
			hang--; cot--; j++;
		}
		cout << endl;
	}
	return 0;
}

