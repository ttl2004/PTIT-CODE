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
		int n, k;
		cin >> n >> k;
		int a[k + 5];
		map<int,int> mp;
		for (int i = 1; i <= k; i ++) {
			cin >> a[i];
			mp[a[i]] ++;
		}
		int idx = k;
		while (idx > 0 && a[idx] == n - k + idx) idx --;
		if (idx <= 0) {
			cout << k << endl;
		}
		else {
			a[idx] ++;
			for (int i = idx + 1; i <= k; i++) {
				a[i] = a[i - 1] + 1;
			}
			int cnt = 0;
			for (int i = 1; i <= k; i ++) {
				if (mp[a[i]] <= 0) cnt ++;
			}
			cout << cnt << endl;
		}
	}

	return 0;
}
