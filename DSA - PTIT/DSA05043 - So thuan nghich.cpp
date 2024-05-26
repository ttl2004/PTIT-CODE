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
int check(string s) {
	int len = s.size();
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s[len - 1 - i]) return 0;
	}
	return 1;
}
__Tieu_Long__{
	Fast();
	Tests() {
		string s;
		cin >> s;
		int n = s.size();
		int ans = 1;
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				string tmp = s.substr(i, j - i + 1);
				if (check(tmp)) ans = max(ans, j + 1 - i);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
