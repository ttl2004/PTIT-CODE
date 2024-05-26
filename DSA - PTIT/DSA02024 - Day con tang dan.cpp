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
set<string> kq;
int check(string s, int n, int a[]) {
	vector<int> b, c;
	for (int i = 0; i < n; i ++) {
		if (s[i] == '1') {
			b.pb(a[i] * (s[i] - '0'));
		}
	}
	c = b;
	if (b.size() < 2) return 0;
	sort(b.begin(), b.end());
	return (c == b) ? 1 : 0;
}
void Try(string s, string x, string y, int a[], int n) {
	if (s.size() == n) {
		if (check(s, n , a)) {
			string str;
			for (int i = 0; i < n; i ++) {
				if (s[i] == '1') {
					str += to_string(a[i] * (s[i] - '0'));
					str += " ";
				}
			}
			kq.insert(str);
		}
		return;
	}
	Try(s + x, x, y, a, n);
	Try(s + y, x, y, a, n);
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 0; i < n; i ++) cin >> a[i];
	Try("", "0", "1", a, n);
	for (auto x : kq) cout << x << endl;
	return 0;
}
