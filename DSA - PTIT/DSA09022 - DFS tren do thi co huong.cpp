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
int kt[1005]; 
void dfs(int u, vector<int> lk[]) {
	cout << u << " ";
	kt[u] = 1;
	for (auto x : lk[u]) {
		if (kt[x] == 0) {
			dfs(x, lk);
		}
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int e, v, u;
		cin >> e >> v >> u;
		vector<int> lk[e + 5];
		memset(kt, 0, sizeof(kt));
		for (int i = 0; i < v; i ++) {
			int x, y;
			cin >> x >> y;
			lk[x].pb(y);
		}
		dfs(u, lk);
		cout << endl;
	}
	return 0;
}
