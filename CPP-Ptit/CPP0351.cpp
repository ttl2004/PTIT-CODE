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
	for (int i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] = tolower(s[i]);
	}
	s[0] = toupper(s[0]);
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin.ignore();
		getline(cin, s);
		vector<string> str;
		stringstream ss(s);
		string s1;
		while (ss >> s1) {
			xuly(s1);
			str.pb(s1);
		}
		if (n == 1) {
			cout << str[str.size() - 1] << " ";
			for (int i = 0; i < str.size() - 1; i++) {
				cout << str[i];
				if (i != str.size() - 2) cout << " ";
			}
		}
		else {
			for (int i = 1; i < str.size(); i++) {
				cout << str[i] << " ";
			}
			cout << str[0];
		}
		cout << endl;
	}

	return 0;
}
