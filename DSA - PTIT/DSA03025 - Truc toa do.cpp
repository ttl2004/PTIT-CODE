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
		pair<int, int> pa[n + 5];
		for (int i = 0; i < n; i ++) cin >> pa[i].fi >> pa[i].se;
		sort(pa, pa + n, [](pair<int, int> x, pair<int, int> y) {
			if (x.se != y.se) return x.se < y.se;
			else x.fi < y.fi;
		});
		int cnt = 1, k = pa[0].se;
		for (int i = 1; i < n; i ++) {
			if (pa[i].fi >= k) {
				k = pa[i].se;
				cnt++;
			} 
		}
		cout << cnt << endl;
 	}
	return 0;
}