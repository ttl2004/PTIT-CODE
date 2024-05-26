#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
#define Fast(); ios_base :: sync_with_stdio (0); cin.tie(0); cout.tie(0);
#define Tests() int t; cin >> t; while (t --)
#define Test() int t = 1; while (t --)
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
int n, m, cnt = 0;
int kt[1005][1005];
char a[1005][1005];
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
void BFS(int x, int y) {
	queue<pair<int, int>> qe;
	kt[x][y] = 1;
	qe.push({x, y});
	while (!qe.empty()) {
		pair<int, int> tmp = qe.front();
		qe.pop();
		for (int i = 0; i < 8; i ++) {
			int z = tmp.fi + dx[i];
			int t = tmp.se + dy[i];
			if (z >= 1 && z <= n && t >= 1 && t <= m && a[z][t] == 'W' && kt[z][t] == 0) {
				qe.push({z, t});
				kt[z][t] = 1;
			}
		}
	}
}
__Tieu_Long__{
	Fast();
	Test() {
		cin >> n >> m;
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= m; j ++) {
				cin >> a[i][j];
			}
		}
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= m; j ++) {
				if (kt[i][j] == 0 && a[i][j] == 'W') {
					BFS(i, j);
					cnt ++;
				}
			}
		} 
		cout << cnt;
	}
	return 0;
}
