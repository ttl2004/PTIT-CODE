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
		int a[n + 5];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool kt = false;
		int _max = 0;
		for (int i = 0; i< n -1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] > a[i] && j != i && _max < a[j] - a[i]) {
					kt = true;
					_max = a[j] - a[i];
				}
			}
		}
		if (kt) cout << _max << endl;
		else cout << "-1\n";
	}
	return 0;
}

