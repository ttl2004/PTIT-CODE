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
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
bool kt[1005 + 5][1005 + 5];
void bfs(int n, int m, int x, int y, int z, int t, vector<vector<int>> a){
	queue<pair<pair<int,int>, int>> qe;
	qe.push({{x, y}, 0});
	kt[x][y] = true;
	while (!qe.empty()) {
		pair<pair<int, int>, int> u = qe.front();
		qe.pop();
		if (u.first.first == z && u.first.second == t) {
			cout << u.second << endl;
			return;
		}
		for (int i = 0; i < 4; i ++) {
			int k = u.first.first + dx[i];
			int h = u.first.second + dy[i];
			if (!kt[k][h] && k < n && h < m && k >= 0 && h >= 0 && a[k][h] == 1) {
				kt[k][h] = true;
				qe.push({{k, h}, u.second + 1});
			}
		}
	}
	cout << -1 << endl;
}
int main() { 
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t; 
	cin >> t; 
	while (t--) { 
		int n, m, x, y, z, t;
		cin >> n >> m >> x >> y >> z >> t;
		memset(kt, false, sizeof(kt));
		vector<vector<int>> a(n + 5, vector<int>(m + 5));
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < m; j ++) {
				cin >> a[i][j];
			}
		}
		if(a[x][y]==0){
			cout << -1 << endl;
			continue;
		}
		bfs(n, m, x, y, z, t, a);
	} 
}

