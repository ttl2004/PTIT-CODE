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
		int n, m, k;
		cin >> n >> m >> k;
		int a[n + 5][m  +5];
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= m; j ++){ 
				cin >> a[i][j];
			}
		}
		vector<int> b;
		int j = 1, cot = m, hang = n, kT = 1;
		while (kT <= n * m) {
			for (int i = j; i <= cot; i ++) {
				//cout << a[j][i] << " ";
				b.pb(a[j][i]);
				kT++;
			}	
			for (int i = j + 1; i <= hang; i ++) {
				//cout << a[i][cot] << " ";
				b.pb(a[i][cot]);
				kT++;
			}
			if (j != hang) {
					for (int i = cot - 1; i >= j; i--) {
						//cout << a[hang][i] << " ";
						b.pb(a[hang][i]);
						kT++;
					}
				}
			if (j != cot) {
					for (int i = hang - 1; i > j; i--) {
						//cout << a[i][j] << " ";
						b.pb(a[i][j]);
						kT++;
					}
			}
			hang--; cot--; j++;
		}
		cout << b[k - 1];
		cout << endl;
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}

