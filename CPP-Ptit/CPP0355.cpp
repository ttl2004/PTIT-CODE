#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
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
void xuly(string& s) {
	int len = s.size();
	for (int  i = 0; i < len; i++) {
		if (s[i] >= 'A' and s[i] <= 'Z') s[i] = tolower(s[i]);
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	vector<string> str;
	vector<string> s2[1005];
	int k = 0;
	for (string s; cin >> s;) {
		str.pb(s);
		if (s[s.size() - 1] == '.' or s[s.size() - 1] == '!' or s[s.size() - 1] == '?') {
			int f= str.size();
			str[f - 1].erase(str[f- 1].end() - 1);
			for (int i = 0; i < f; i++) {
				xuly(str[i]);
			}
			str[0][0] = toupper(str[0][0]);
			vector<string> st(str.begin(), str.end());
			s2[k] = st;
			k++;
			str.clear();
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < s2[i].size(); j++) {
			cout << s2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
