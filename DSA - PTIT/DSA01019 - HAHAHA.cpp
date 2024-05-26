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
vector<string> ans;
int check(string s, int n) {
	if (!(s[0] == 'H' && s[n - 1] == 'A')) return 0;
	for (int i = 1; i < n; i ++) {
		if(s[i] == 'H' && s[i - 1] == 'H') return 0;
	}
	return 1;
}
void Try(string s, string a, string b, int n) {
	if (s.size() == n){
		if (check(s, n)) ans.pb(s);
		return;
	}
	Try(s + a, a, b, n);
	Try(s + b, a, b, n);
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n;
		cin >> n;
		Try("", "H", "A", n);
		sort(ans.begin(), ans.end(), [] (string x, string y){
			return x < y;
		});
		for(auto kq : ans) {
			cout << kq << endl;
		}
		ans.clear();
	}

	return 0;
}
