#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
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
		ll n;
		cin >> n;
		ll a[n + 5], b[n  + 5];
		for (ll i = 0; i < n; i++) {
			cin >> b[i];
			a[i] = b[i];
		}
		a[0] = a[0] * a[1];
		a[n - 1] = a[n - 1] * a[n - 2];
		for (ll  i = 1; i < n - 1 ; i++) {
			a[i] = b[i - 1] * b[i + 1];
		}
		//sort(a, a + n);
		for (int i = 0; i <n ; i++) cout << a[i] << " ";
		cout << endl;
	}

	return 0;
}
