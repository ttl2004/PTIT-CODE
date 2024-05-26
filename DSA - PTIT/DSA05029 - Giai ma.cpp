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
	Tests() {
		string s;
		cin >> s;
		if (s[0] == '0') {
			cout << "0\n";
			continue;
		}
		int len = s.size();
		s = "@" + s;
		int dp[len + 5] = {0};
		dp[0] = 1;
		dp[1] = 1;
		for (int i = 2; i <= len; i ++) {
			if (s[i] > '0') dp[i] = dp[i - 1];
			if (s[i - 1] ==  '1'|| (s[i - 1] == '2' && s[i] < '7')) dp[i] += dp[i - 2];
		}
		cout << dp[len] << endl;
	}
	return 0;
}
