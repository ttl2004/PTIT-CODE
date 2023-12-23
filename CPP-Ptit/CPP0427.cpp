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
		int a[n + 5];
		for (int i = 0; i < n ; i ++) {
			cin >> a[i];
		}
		int cnt  = 0;
		for (int i = 0; i < n ; i ++) {
			if (a[i] != 0) {
				if (a[i] == a[i + 1]) {
					a[i] *= 2;
					a[i + 1] = 0;
				}
			}
			else  cnt ++;
		}
		for (int i = 0 ; i < n ; i ++) {
			if (a[i] != 0) cout << a[i] << " ";
		}
		while (cnt--) {
			cout << "0 ";
		}
		cout << endl;
	}

	return 0;
}
