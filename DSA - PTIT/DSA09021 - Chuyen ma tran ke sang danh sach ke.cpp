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
	vector<int> lk[t + 5];
	for (int i = 1; i <= t; i ++) {
		for (int j = 1; j <= t; j ++) {
			int x;
			cin >> x;
			if (j <= i) {
				if (x == 1) {
					lk[i].pb(j);
					lk[j].pb(i);
				}
			}
		}
	}
	for (int i = 1; i <= t; i ++) {
		for (auto x : lk[i]) cout << x << " ";
		cout << endl;
	}
	return 0;
}
/*
3
0 1 1
1 0 1
1 1 0
*/
