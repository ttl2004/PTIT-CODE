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
		ll a[n + 5], check = 0;
		for (int i = 0; i < n; i ++) {
			cin >> a[i];
			a[i] *= a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n; i ++) {
			for (int j = i + 1; j < n; j ++) {
				if (binary_search(a, a + n, a[i] + a[j]) == 1) {
					check = 1;
					break;
				}
			}
			if (check) break;
		}
		printf("%s\n", (check) ? "YES" : "NO");
	}
	return 0;
}
