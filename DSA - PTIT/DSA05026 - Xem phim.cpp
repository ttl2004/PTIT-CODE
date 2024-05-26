#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
#define Fast(); ios_base :: sync_with_stdio (0); cin.tie(0); cout.tie(0);
#define Tests() int t; cin >> t; while (t --)
#define Test() int t = 1; while (t --)
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

__Tieu_Long__{
	Fast();
	Test() {
		int n, c;
		cin >> c >> n;
		int a[n + 5];
		for (int i = 0; i < n; i ++) {
			cin >> a[i];
		}
		int dp[c + 5] = {0};
		dp[0] = 1;
		for (int i = 0; i < n; i ++) {
			for (int j = c; j >= a[i]; j --) {
				if (dp[j - a[i]] == 1) dp[j] = 1;
			}
		}
		while (c --) {
			if (dp[c] == 1) {
				cout << c;
				break;
			}
		}
	}
	return 0;
}
