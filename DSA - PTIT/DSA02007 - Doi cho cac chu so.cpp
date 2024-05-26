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
string res;
void Try(string s, int k, int n) {
	if (k == 0) return;
	for (int i = 0; i < n; i ++) {
		for (int j = i + 1; j < n; j ++) {
			if (s[i] < s[j]) {
				swap(s[i], s[j]);
				res = max(res, s);
				Try(s, k - 1, n);
				swap(s[i], s[j]);
			}
		}
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int k;
		string s;
		cin >> k >> s;
		res = s;
		Try(s, k, s.size());
		cout << res << endl;
	}
	return 0;
}
