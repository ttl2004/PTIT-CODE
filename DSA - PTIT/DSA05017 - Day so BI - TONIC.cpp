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
		int a[n + 5];
		pair<int, int> left[n + 5]; pair<int, int> right[n + 5];
		for (int i = 0; i < n; i ++) cin >> a[i];
		for (int i = 0; i < n; i ++) {
			left[i].fi = 1;
			left[i].se = a[i];
			for (int j = 0; j < i; j ++) {
				if (a[i] > a[j] && left[i].fi <= left[j].fi) {
					left[i].fi = left[j].fi + 1;
					left[i].se = max(left[j].se + a[i], left[i].se);
				}
			}
		}
		for (int i = n - 1; i >= 0; i --) {
			right[i].fi = 1;
			right[i].se = a[i];
			for (int j = n - 1; j > i; j --) {
				if (a[i] > a[j] && right[i].fi <= right[j].fi) {
					right[i].fi = right[j].fi + 1;
					right[i].se = max(right[j].se + a[i], right[i].se);
				}
			}
		}
		int max_ = 0;
		for (int i = 0; i < n; i ++) {
			max_ = max(max_, right[i].se + left[i].se - a[i]);
		}
		cout << max_ << endl;
	}
	return 0;
}
