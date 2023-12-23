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
	int n;
	cin >> n;
	vector<int> a;
	int b[n + 5][n + 5];
	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < n ; j++) {
			int x;
			cin >> x;
			a.pb(x);
		}
	}
	sort(begin(a), end(a));
	int hang = n, cot = n, j = 1, k = 0;
	while (k < n * n) {
		for (int i = j; i <= cot; i++) {
			b[j][i] = a[k++];
		}
		for (int i = j + 1; i <= hang; i++) {
			b[i][cot] = a[k++];
		}
		if (j != hang) {
			for (int i = cot - 1; i >= j; i--) {
				b[hang][i] = a[k++];
			}
		}
		if (j != cot) {
			for (int i = hang - 1; i > j; i--) {
				b[i][j] = a[k++];
			}
		}
		cot--; hang--; j++;
	}
	for (int i = 1; i <= n; i++) {
		for (int jt = 1; jt <= n; jt++) {
			cout << b[i][jt] << " ";
		}
		cout << endl;
	}
	return 0;
}

