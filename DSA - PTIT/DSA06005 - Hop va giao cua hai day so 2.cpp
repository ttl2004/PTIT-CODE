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
		int n, m;
		cin >> n >> m;
		set<int> st;
		map<int, int> mp;
		for (int i = 0; i < n; i ++) {
			int x;
			cin >> x;
			st.insert(x);
			mp[x] ++;
		}
		for (int i = 0; i < m; i ++) {
			int x;
			cin >> x;
			st.insert(x);
			mp[x] ++;
		}
		for (auto x : st) cout << x << " ";
		cout << endl;
		for (auto x : mp) {
			if (x.se >= 2) cout << x.fi << " ";
		}
		cout << endl;
	}
	return 0;
}
