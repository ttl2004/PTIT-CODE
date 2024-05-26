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
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};
int n, m;
int kt[1005][1005], a[1005][1005];
void DFS(int i, int j) {
	kt[i][j] = 1;
	for (int k = 0; k < 8; k ++) {
		int x = i + dx[k];
		int y = j + dy[k];
		if (kt[x][y] == 0 && a[x][y] == 1 && x >= 0 && y >= 0 && x < n && y < m) {
			DFS(x, y);
		}
	}
}
int main() {
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin >> t;
    while (t --) {
    	cin >> n >> m;
    	for (int  i = 0; i < n; i ++) {
    		for (int j = 0; j < m; j ++) cin >> a[i][j];
		}
		int cnt = 0;
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < m; j ++) {
				if(a[i][j] == 1 && kt[i][j] == 0) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
		memset(kt, 0, sizeof(kt));
	}

    return 0;
}