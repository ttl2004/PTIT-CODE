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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n  + 5][m  + 5];
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		vector<int> b;
		int j = 1, hang = n, cot = m, f = 1;
		while (f <= n *m) {
			for (int i = j; i <= cot; i ++) {
				b.pb(a[j][i]);
				f ++;
			}
			for (int i = j + 1; i <= hang;  i++){
				b.pb(a[i][cot]);
				f ++;
			}
			if (j != hang) {
				for (int i = cot - 1; i >= j; i--) {
					b.pb(a[hang][i]);
					f ++;
				}
			}
			if (j != cot) {
				for (int i = hang - 1; i > j; i--) {
					b.pb(a[i][j]);
					f ++;
				}
			}
			int  len = b.size();
			int tmp = b[len - 1];
			for (int i = len - 1; i > 0 ; i--) {
				b[i] = b[i - 1];
			}
			b[0] = tmp;
			int k = 0;
			for (int i = j; i <= cot; i ++) {
				a[j][i] = b[k++];
			}
			for (int i = j + 1; i <= hang;  i++){
				a[i][cot] = b[k++];
			}
			if (j != hang) {
				for (int i = cot - 1; i >= j; i--) {
					a[hang][i] = b[k++];
				}
			}
			if (j != cot) {
				for (int i = hang - 1; i > j; i--) {
					a[i][j] = b[k++];
				}
			}
			b.clear();
			hang --; cot -- ; j ++;
		}
		
		
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= m; j++) {
				cout  << a[i][j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
