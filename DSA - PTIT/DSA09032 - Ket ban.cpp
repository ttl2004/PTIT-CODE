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
int n, m;
vector<int> adj[100005];
int kt[100005];
int BFS(int i) {
	int cnt = 0;
	queue<int> qe;
	qe.push(i);
	kt[i] = 1;
	while (!qe.empty()) {
		int tmp = qe.front();
		qe.pop();
		cnt ++;
		for (auto x : adj[tmp]) {
			if (kt[x] == 0) {
				qe.push(x);
				kt[x] = 1;
			}
		}
	}
	return cnt;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		for (int i = 0; i < m; i ++) {
			int x, y;
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		int _max = 0;
		for (int i = 1; i <= n; i ++) {
			if (kt[i] == 0) _max = max(_max, BFS(i));
		}
		cout << _max << endl;
		for (int i = 0; i <= 1004; i ++) adj[i].clear();
		memset(kt, 0, sizeof(kt));
	}
	return 0;
}
