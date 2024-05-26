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
//
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int m, n;
		cin >> m >> n;
		ll a[m + 5][n + 5], kt[m + 5][n + 5];
		for (int i = 1; i <= m; i ++) {
			for (int j = 1; j <= n; j ++) {
				cin >> a[i][j];
				kt[i][j] = 0;
			}
		}
		int ok = 0;
		queue<pair<pair<int, int>, int>> qe;
		qe.push({{1, 1}, 0});
		kt[1][1] = 1;
		while (!qe.empty()) {
			pair<pair<int, int>, int> tmp = qe.front();
			qe.pop();
			if (tmp.fi.fi == m && tmp.fi.se == n) {
				cout << tmp.se << endl;
				ok = 1;
				break;
			}
			if (tmp.fi.se + a[tmp.fi.fi][tmp.fi.se] <= n && kt[tmp.fi.fi][tmp.fi.se + a[tmp.fi.fi][tmp.fi.se]] == 0) {
				qe.push({{tmp.fi.fi, tmp.fi.se + a[tmp.fi.fi][tmp.fi.se]}, tmp.se + 1});
				kt[tmp.fi.fi][tmp.fi.se + a[tmp.fi.fi][tmp.fi.se]] = 1;
			}
			if (tmp.fi.fi + a[tmp.fi.fi][tmp.fi.se] <= m && kt[tmp.fi.fi + a[tmp.fi.fi][tmp.fi.se]][tmp.fi.se] == 0) {
				qe.push({{tmp.fi.fi + a[tmp.fi.fi][tmp.fi.se], tmp.fi.se}, tmp.se + 1});
				kt[tmp.fi.fi + a[tmp.fi.fi][tmp.fi.se]][tmp.fi.se] = 1;
			}
		}
		if (!ok) cout << "-1\n";
	}
	return 0;
}