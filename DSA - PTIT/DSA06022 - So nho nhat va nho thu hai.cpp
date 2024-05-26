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
		set<int> st;
		for (int i = 0; i < n; i ++) {
			int x;
			cin >> x;
			st.insert(x);
		}
		int cnt = 0, min_value_1, min_value_2;
		for (auto x : st) {
			if (cnt > 2) break;
			else if (cnt == 0) {
				min_value_1 = x;
				cnt ++;
			}
			else if (cnt == 1) {
				min_value_2 = x;
				cnt ++;
			}
		}
		if (st.size() == 1 || min_value_1 == min_value_2) cout << "-1\n";
		else cout << min_value_1 << " " << min_value_2 << endl;
	}
	return 0;
}