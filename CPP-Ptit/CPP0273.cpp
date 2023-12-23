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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 5], d[n + 5];
		d[0] = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			d[i] = d[i - 1] + a[i];
		}
		bool kt = false;
		for (int i = 1; i <= n; i++) {
			if (d[i] - d[0] == d[n] - d[i - 1]) {
				cout << i;
				kt = true;
				break;
			}
		}
		if (!kt) cout << "-1";
		cout << endl;
	}
	return 0;
}

