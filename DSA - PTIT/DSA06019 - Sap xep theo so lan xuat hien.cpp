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

int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n;
		cin >> n;
		map<int, int> mp;
		for (int i = 0; i < n; i ++) {
			int x;
			cin >> x;
			mp[x] ++;
		}
		int len = mp.size();
		pair<int, int> pa[len + 1];
		int idx = 0;
		for (auto x : mp) {
			pa[idx].fi = x.fi;
			pa[idx].se = x.se;
			idx ++;
		}
		sort(pa, pa + idx, [] (pair<int, int> x, pair<int, int> y) {
			if (x.se != y.se) return x.se > y.se;
			else return x.fi < y.fi;
		});
		for (int i = 0; i < idx; i ++) {
			for (int j = 0; j < pa[i].se; j ++) {
				cout << pa[i].fi << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
