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
int dx[2] = {1, 0};
int dy[2] = {0, 1};
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n;
		cin >> n;
		ll a[n + 5][n + 5];
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= n; j ++) {
				cin >> a[i][j];
			}
		}
		if (a[1][1] == 0) {
			cout << "-1\n";
			continue;
		}
		else {
			int ok = 0;
			queue<pair<pair<int, int>, string>> qe;
			qe.push({{1, 1}, ""});
			while (!qe.empty()) {
				pair<pair<int, int>, string> tmp = qe.front();
				qe.pop();
				if (tmp.fi.fi == n && tmp.fi.se == n) {
					cout << tmp.se << " ";
					ok = 1;
				}
				if (tmp.fi.fi + dx[0] <= n && tmp.fi.se + dy[0] <= n && a[tmp.fi.fi + dx[0]][tmp.fi.se + dy[0]] == 1) {
					qe.push({{tmp.fi.fi + dx[0], tmp.fi.se + dy[0]}, tmp.se + "D"});
				}
				if (tmp.fi.fi + dx[1] <= n && tmp.fi.se + dy[1] <= n && a[tmp.fi.fi + dx[1]][tmp.fi.se + dy[1]] == 1) {
					qe.push({{tmp.fi.fi + dx[1], tmp.fi.se + dy[1]}, tmp.se + "R"});
				}
			}
			if (!ok) cout << "-1";
			cout << endl;
		}
	}
	return 0;
}