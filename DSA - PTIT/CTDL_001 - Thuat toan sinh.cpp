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
int check(string s) {
	int len = s.size();
	for (int i = 0; i < len/2; i ++) {
		if (s[i] != s[len - 1- i]) return 0;
	}
	return 1;
}
void Try(string s, string a, string b, int n){
	if (s.size() == n){
		if (check(s)){
			for (int i = 0; i < n; i ++) {
				cout << s[i];
				if (i != n - 1) cout << " ";
			}
			cout << endl;
		}
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
	Try("", "0", "1", n);

	return 0;
}
