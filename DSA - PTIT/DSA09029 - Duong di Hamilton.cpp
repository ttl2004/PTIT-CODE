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
int v, e, kt[20], ok = 0;
vector<int> adj[20];
void DFS(int i, int cnt) {
	if (cnt == v) {
		ok = 1;
	}
	kt[i] = 1;
	for (auto x : adj[i]) {
		if (!kt[x]) {
			DFS(x, cnt + 1);
		}
	}
	kt[i] = 0;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		cin >> v >> e;
		for (int i = 0 ; i < e; i ++) {
			int x, y;
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		for (int i = 1; i <= v; i ++) {
			memset(kt, 0, sizeof(kt));
			ok = 0;
			DFS(i, 1);
			if (ok) break;
		}
		if (ok) cout << "1\n";
		else cout << "0\n";
		for (int i = 1; i <= v; i ++) adj[i].clear();
	}
	return 0;
}
