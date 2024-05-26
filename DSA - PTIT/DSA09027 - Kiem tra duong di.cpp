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
int kt[1005], ok = 0; 
void bfs(int begin, int end, vector<int> lk[]) {
	queue<int> qe;
	qe.push(begin);
	kt[begin] = 1;
	while (!qe.empty()) {
		int tmp = qe.front();
		qe.pop();
		if (tmp == end) {
			ok = 1;
			return;
		}
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
		int e, v;
		cin >> e >> v;
		vector<int> lk[e + 5];
		//memset(kt, 0, sizeof(kt));
		for (int i = 0; i < v; i ++) {
			int x, y;
			cin >> x >> y;
			lk[x].pb(y);
			lk[y].pb(x);
		}
		int q;
		cin >> q;
		while (q --) {
			int begin, end;
			cin >> begin >> end;
			memset(kt, 0, sizeof(kt));
			bfs(begin, end, lk);
			if (ok) cout << "YES\n";
			else cout << "NO\n";
			ok = 0;
		}
		cout << endl;
	}
	return 0;
}
