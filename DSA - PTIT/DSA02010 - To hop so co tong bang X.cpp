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
vector<vector<int>> ans;
void Try(int pos, int a[], vector<int> &tmp, int n, int x) {
	if (x == 0) {
		ans.pb(tmp);
		return;
	}
	for (int i = pos; i < n; i ++) {
		if (x - a[i] >= 0) {
			tmp.pb(a[i]);
			Try(i, a, tmp, n, x - a[i]);
			tmp.pop_back();
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
		int n, x;
		cin >> n >> x;
		int a[n + 5];
		vector<int> tmp;
		for (int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n);
		Try(0, a, tmp, n, x);
		if (ans.size() == 0) cout << "-1\n";
		else {
			for (auto x : ans) {
				cout << "[";
				int len = x.size();
				for (int i = 0; i < len; i ++) {
					cout << x[i];
					if (i != len - 1) cout << " ";
					else cout << "]";
				}
			}
			cout << "\n";
		}
		ans.clear();
	}
	return 0;
}
