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
vector<string> kq;
void Try(string s, string a, string b, int n, int k, ll &cnt) {
	if (s.size() == n) {
		int count = 0, ok = 1, _max = 0;
		for (int i = 0; i < n; i ++) {
			if (s[i] == 'A') {
				count ++;
			}
			else {
				_max = max(_max, count);
				count = 0;
			}
		}
		_max = max(_max, count);
		if (_max == k) {
			kq.pb(s);
			cnt ++;
		}
		return ;
	}
	Try(s + a, a, b, n, k, cnt);
	Try(s + b, a, b, n, k, cnt);
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	while (t --) {
		int n, k;
		ll cnt = 0;
		cin >> n >> k;
		Try("", "A", "B", n, k, cnt);
		cout << cnt << endl;
		for (auto x : kq) cout << x << endl;
	}
	return 0;
}
