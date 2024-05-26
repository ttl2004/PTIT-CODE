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
void Try(int pos, int a[], int n, int s, vector<int> &ans) {
	if (s == 0) {
		cout << "(";
		int len = ans.size();
		for (int i = 0; i < len; i ++) {
			cout << ans[i];
			if (i != len - 1) cout << " ";
			else cout << ")";
		}
		cout << " ";
		return;
	}
	for (int i = pos; i <= n; i ++) {
		if (s - a[i] >= 0) {
			ans.pb(a[i]);
			Try(i, a, n, s - a[i], ans);
			ans.pop_back();
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
		int n, s;
		cin >> n;
		s = n;
		int a[n + 5];
		vector<int> ans;
		for (int i = 1; i <= n; i ++) a[i] = n - i + 1;
		Try(1, a, n, s, ans);
		cout << endl;
	}
	return 0;
}
