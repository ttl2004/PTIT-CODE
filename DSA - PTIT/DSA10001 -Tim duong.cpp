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

int dx[4] = { -1, 0, 0, 1};
int dy[4] = { 0, -1, 1, 0};
int kt[1005][1005];
int n, m;
void BFS(int x_begin, int y_begin, int x_end, int y_end, vector<vector<char>> s) {
	/*
		fi.fi là x
		fi.se là y
		se.fi là số lần đổi hướng
		se.se là lưu hướng đi: 0->(-1, 0), 1->(0, -1), 2->(0, 1), 3->(1, 0)
	*/
	queue<pair<pair<int, int>, pair<int, int>>> qe;
	kt[x_begin][y_begin] = 1;
	for (int i = 0; i < 4; i ++) {
		int x = x_begin + dx[i];
		int y = y_begin + dy[i];
		if (x >= 0 && y >= 0 && x < n && y < m) {
			qe.push({{x, y}, {0, i}});
			kt[x][y] = 1;
		}
	}
	while (!qe.empty()) {
		pair<pair<int, int>, pair<int, int>> tmp = qe.front();
		qe.pop();
		if(s[tmp.fi.fi][tmp.fi.se] == '*') continue;
		if (tmp.fi.fi == x_end && tmp.fi.se == y_end && tmp.se.fi <= 2) {	
			cout << "YES\n";
			return;
		}
		for (int i = 0; i < 4; i ++) {
			int x_temp = tmp.fi.fi + dx[i];
			int y_temp = tmp.fi.se + dy[i];
			if (x_temp < n && y_temp < m && x_temp >= 0 && y_temp >= 0 && (s[x_temp][y_temp] == '.' || s[x_temp][y_temp] == 'T') && kt[x_temp][y_temp] == 0 && (tmp.se.fi <= 2 || tmp.se.fi + 1 <= 2)) {
				if (tmp.se.se == i) {
					qe.push({{x_temp, y_temp}, {tmp.se.fi, i}});
				}
				else {
					qe.push({{x_temp, y_temp}, {tmp.se.fi + 1, i}});
				}
				kt[x_temp][y_temp] = 1;
			}
		}
	}
	cout << "NO\n";
}

int main() {
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin >> t;
    while (t --) {
    	cin >> n >> m;
    	vector<vector<char>> s(n + 5, vector<char> (m + 5));
    	int x_begin, y_begin, x_end, y_end;
    	for (int i = 0; i < n; i ++) {
    		for (int j = 0; j < m; j ++) {
    			cin >> s[i][j];
    			if (s[i][j] == 'S') {
    				x_begin = i;
    				y_begin = j;
				}
				if (s[i][j] == 'T') {
					x_end = i;
					y_end = j;
				}
			}
		}
		BFS(x_begin, y_begin, x_end, y_end, s);
		memset(kt, 0, sizeof(kt));
	}

    return 0;
}