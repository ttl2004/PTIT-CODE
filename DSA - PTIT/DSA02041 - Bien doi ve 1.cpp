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
		ll n;
		cin >> n;
		queue<pair<ll, int>> qe;
		qe.push({n, 0});
		while (!qe.empty()) {
			pair<ll, int> tmp = qe.front();
			qe.pop();
			if (tmp.fi == 1) {
				cout << tmp.se << endl;
				break;
			}
			if (tmp.fi % 3 == 0) qe.push({tmp.fi / 3, tmp.se + 1});
			if (tmp.fi % 2 == 0) qe.push({tmp.fi / 2, tmp.se + 1});
			if (tmp.fi - 1 > 0) qe.push({tmp.fi - 1, tmp.se + 1});
		}
	}
	return 0;
}
