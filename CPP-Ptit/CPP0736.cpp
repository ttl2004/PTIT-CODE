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
		ll n, x;
		cin >> n >> x;
		ll a[n  + 5], s = 0, _max = 0;
		for (int i = 0; i < n; i ++) {
			cin >> a[i];
			_max = max(_max , a[i]);
			s += a[i];
		}
		if (s <= x) {
			cout << "-1\n";
			continue;
		}
		if (_max > x) {
			cout << "1\n";
			continue;
		}
		ll sum = 0;
		int _min = 1e9;
		int left = 0, right = 0;
		while (right <= n - 1) {
			//cout << sum << "_ " << right << endl;
			while (sum <= x && right < n) {
				sum += a[right];
				right ++;
			}
			while (sum > x && left < n) {
				_min = min(_min, right - left);
				sum -= a[left];
				left ++;
			}
		}
		cout << _min << endl;
 	}

	return 0;
}
