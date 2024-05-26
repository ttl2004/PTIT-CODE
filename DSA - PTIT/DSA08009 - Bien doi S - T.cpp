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
	int k;
	cin >> k;
	while (k --) {
		ll s, t;
		cin >> s >> t;
		if (s >= t) {
			cout << s - t << endl;
		}
		else {
			map<ll, int> mp;
			queue<pair<ll, int>> qe;
			qe.push({s - 1, 1});
			qe.push({s * 2, 1});
			mp[s - 1] ++;
			mp[s * 2] ++;
			while (!qe.empty()) {
				if (qe.front().fi == t) {
					cout << qe.front().se << endl;
					break;
				}
				pair<ll, int> tmp = qe.front();
				qe.pop();
				
				if (mp[tmp.fi * 2] == 0 && tmp.fi * 2 != 0 && tmp.fi * 2 <= t + 1) {
					qe.push({tmp.fi * 2, tmp.se + 1});
					mp[tmp.fi * 2] ++;
				}
					
				if (mp[tmp.fi - 1] == 0 && tmp.fi - 1 != 0) {
					qe.push({tmp.fi - 1, tmp.se + 1});
					mp[tmp.fi - 1] ++;
				}
					
			}
		}
	}
	return 0;
}