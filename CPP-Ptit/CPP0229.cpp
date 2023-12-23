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
		int n, m;
		cin >> n >> m;
		int a[n + 5][m + 5], kt[n + 5][m + 5];
		for (int i = 0; i <= n + 1; i ++) {
			for (int j = 0; j <= m + 1; j ++) {
				if (i == 0 || i == n + 1) a[i][j] = 0;
				else if (j == 0 || j == m + 1) a[i][j] = 0;
				else cin >> a[i][j];
				kt[i][j] = 0;
			}
		}
		int i = 1, j = 1, k = 2, f = 0; // f = 1 la in cheo len, f = 0 la in cheo xuong
		cout << a[i][j] << " ";
		kt[i][j] = 1;
		kt[i + 1][j - 1] = 1;
		while (k <= n * m) {
			if ((i == 1 && j != m && kt[i + 1][j - 1] == 1) || (i == n && kt[i - 1][j + 1] == 1)) j++;
			else if (i == 1 && kt[i + 1][j - 1] == 0) {
				i ++;
				j --;
				f = 0;
			}
			else if (i == n && kt[i - 1][j + 1] == 0) {
				i --;
				j ++;
				f = 1;
			}
			else if (j == 1 && kt[i - 1][j + 1] == 1) {
				i++;
				f = 1;
			}
			else if (j == m && kt[i + 1][j - 1] == 1){
				i++;
				f = 0;
			}
			else {
				if (f == 0) {
					i ++;
					j --;
					
				}
				else {
					i --;
					j ++;
				}
			}
			cout << a[i][j] << " ";
			kt[i][j] = 1;
			k ++;
			
		}
		cout << endl;
	}

	return 0;
}
