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
int check(string s, int n) {
	if (s.size() < 6) return 0;
	if (!(s[0] == '8' && s[n - 1] == '6')) return 0;
	for (int i = 1; i < n; i ++) {
		if (s[i] == '8' && s[i - 1] == '8') return 0;
	}
	for (int i = 0; i < n - 3; i ++) {
		if (s[i] == '6' and s[i + 1] == '6' and s[i + 2] == '6' and s[i + 3] == '6') return 0;
	}
	return 1;
}
void Try(string s, string a, string b, int n) {
	if (s.size() == n) {
		if (check(s, n)) cout << s << endl;
		return;
	}
	Try(s + a, a, b, n);
	Try(s + b, a, b, n);
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	Try("", "6", "8", n);
	return 0;
}
