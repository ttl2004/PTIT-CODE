#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define fi first
#define se second
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
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};
bool kt[1005][1005];
void bfs(vector<vector<int>> a, int n, int m, int i, int j) {
	queue<pair<int,int>> qe;
	qe.push({i, j});
	kt[i][j] = true;
	while (!qe.empty()) {
		pair<int, int> u = qe.front();
		qe.pop();
		for (int i = 0; i < 8; i ++) {
			int x = u.fi + dx[i];
			int y = u.se + dy[i];
			if (!kt[x][y] && x >= 0 && y >= 0 && x < m && y < n && a[x][y] == 1) {
				kt[x][y] = true;
				qe.push({x, y});
			}
		}
	}
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	int n, m;
    	cin >> n >> m;
    	memset(kt, false, sizeof(kt));
    	vector<vector<int>> a(n + 5, vector<int>(m + 5));
    	for (int i = 0; i < n; i ++) {
    		for (int j = 0; j < m; j ++) cin >> a[i][j];
		}
		int cnt = 0;
		for (int i = 0; i < n ; i ++) {
			for (int j = 0; j < m; j ++) {
				if (a[i][j] == 1 && !kt[i][j]) {
					cnt++;
					bfs(a, n, m, i , j);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}