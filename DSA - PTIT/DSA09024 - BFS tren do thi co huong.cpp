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
void bfs(int u, vector<int> lk[]) {
	queue<int> qe;
	qe.push(u);
	kt[u] = 1;
	while (!qe.empty()) {
		int tmp = qe.front();
		qe.pop();
		cout << tmp << " ";
		for (auto x : lk[tmp]) {
			if (!kt[x]) {
				qe.push(x);
				kt[x] = 1;
			}
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
		bfs(u, lk);
		cout << endl;
	}
	return 0;
}
