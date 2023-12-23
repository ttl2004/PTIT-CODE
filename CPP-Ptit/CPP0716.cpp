#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define F for
#define W while
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
int n, k;
int a[30][30], cnt = 0;
void Try(int i, int j, int s) {
	if (i == n - 1 && j == n -1 && s == k) {
		cnt ++;
		return ;
	}
	if (j < n -1) Try (i, j + 1, s + a[i][j + 1]);
	if (i < n -1) Try (i + 1, j, s + a[i + 1][j]);
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < n; j ++) {
				cin >> a[i][j];
			}
		}
		Try(0, 0, a[0][0]);
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
