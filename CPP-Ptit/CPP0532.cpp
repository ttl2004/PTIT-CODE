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
		int n;
		cin >> n;
		pair<double, double> pa[n + 5];
		for (int i = 0; i < n; i ++) {
			cin >> pa[i].fi >> pa[i].se;
		}
		double s1 = 0, s2 = 0;
		for (int i = 0; i < n - 1; i ++) {
			s1 += pa[i].fi * pa[i + 1].se;
			s2 += pa[i].se * pa[i + 1].fi;
		}
		s1 += pa[n - 1].fi * pa[0].se;
		s2 += pa[n - 1].se * pa[0].fi;
		printf("%.3lf\n", (double)((s1 - s2)/2));
		//cout << fixed << setprecision(3) << (double)(s1 - s2)/2 << endl;
	}

	return 0;
}
