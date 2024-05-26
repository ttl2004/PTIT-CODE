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
map<int, int> mp;
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n, k;
		cin >> n >> k;
		int a[k + 5];
		for (int i = 1; i <= k; i ++) {
			cin >> a[i];
			mp[a[i]] ++;
		}
		int i = k;
		while (i > 0 && a[i] == n - k + i) i --;
		if (i <= 0) {
			cout << k << endl;
		}
		else {
			int cnt = 0;
			a[i] ++;
			for (int j = i + 1; j <= k; j ++) {
				a[j] = a[j - 1] + 1;
			}
			for (int j = 1; j <= k; j ++) {
				if (mp[a[j]] == 0) cnt ++;
			}
			cout << cnt << endl;
		}
		mp.clear();
	}
	return 0;
}


