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
int kt[1005], ok; 
int e, v, u, z;
vector<int> kq;
vector<int> lk[1005];
string res;
void dfs(int u, string s) {
	kt[u] = 1;
	for (auto x : lk[u]) {
		if (kt[x] == 0) {
			if (x == z) {
				ok = 1;
				res = s + " " + to_string(x);
			}
			dfs(x, s + " " + to_string(x));
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
	    res = "";
	    ok = 0;
	    for (int i = 0; i <= 1004; i ++) lk[i].clear();
		cin >> e >> v >> u >> z;
		memset(kt, 0, sizeof(kt));
		for (int i = 0; i < v; i ++) {
			int x, y;
			cin >> x >> y;
			lk[x].pb(y);
		}
		dfs(u, to_string(u));
		if (ok == 0) cout << "-1";
		else cout << res;
		cout << endl;
	}
	return 0;
}