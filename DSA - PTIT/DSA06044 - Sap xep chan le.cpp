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
	int t = 1;
	//cin >> t;
	while (t --) {
		int n;
		cin >> n;
		vector<int> a, b;
		for (int i = 1; i <= n; i ++) {
			int x;
			cin >> x;
			if (i % 2 == 1) a.pb(x);
			else b.pb(x);
		}
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		for (int i = 0; i < n/2; i ++) {
			cout << a[i] << " " << b[i] << " ";
		}
		if (n % 2 == 1) cout << a[n/2];
	}
	return 0;
}