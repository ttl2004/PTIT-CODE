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
		int n , k;
		cin >> n >> k;
		ll a[n + 5];
		for (int i = 0; i < n; i ++) {
			cin >> a[i];
		}
		ll cnt = 0;
		sort(a, a + n);
		for (int i = 0; i < n; i ++) {
			for (int j = i + 1; j < n; j ++) {
				ll f = k - a[i] - a[j];
				cnt += lower_bound(a + j + 1, a + n, f) - (a + j + 1);
				
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
