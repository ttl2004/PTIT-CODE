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
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n + 5], b[m + 5];
		map<int, int> mp, kt;
		for (int i = 0; i < n ; i++) {
			cin >> a[i];
			mp[a[i]] ++;
		}
		for (int i = 0; i < m; i ++) {
			cin >> b[i];
			kt[b[i]] ++;
		}
		for (int i = 0; i < m; i ++) {
			while (mp[b[i]] > 0) {
				cout << b[i] << " ";
				mp[b[i]] --;
			}
		}
		for (auto x : mp) {
			if (kt[x.fi] < 1) {
				while (x.se > 0) {
					cout << x.fi << " ";
					x.se --;
				}
			}
		}
		cout << endl;
	}

	return 0;
}
