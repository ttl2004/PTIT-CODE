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
	int n, m;
	cin >> n;
	int a[n + 5][n + 5];
	for (int i = 0; i < n ; i ++) {
		for (int j = 0; j < n; j ++) cin >> a[i][j];
	}
	cin >> m;
	int b[m + 5][m + 5];
	for (int i = 0; i < m ; i ++) {
		for (int j = 0; j < m; j ++) cin >> b[i][j];
	}
	int i = 0, j = 0;
	while (1) {
		//cout << i << " - " << j <<endl;
		for (int f = i; f < i + m; f ++) {
			for (int k = j; k < j + m; k++){
				a[f][k] = a[f][k] * b[f % m][k % m];
			}
		}
		if (j == n) {
			i += m;
			j = 0;
			if (i == n) break;
		}
		else j += m;
	}
	for (int i = 0; i < n ; i ++) {
		for (int j = 0; j < n; j ++) cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
