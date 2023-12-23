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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string str1, str2;
		vector<string> s1, s2;
		getline(cin, str1);
		getline(cin, str2);
		stringstream ss(str1);
		string s;
		while (ss >> s) {
			s1.pb(s);
		}
		stringstream ss2(str2);
		string st;
		while (ss2 >> st) {
			s2.pb(st);
		}
		//sort(s1.begin(), s1.end());
		for (int j = 0; j < s2.size(); j++) {
			for (int i = 0; i < s1.size(); i++) {
				if (s2[j] == s1[i]) {
					s1[i][0] = '@';
				}
			}
		}
		set<string> sy;
		for (int i = 0; i < s1.size(); i++) {
			if (s1[i][0] != '@') sy.insert(s1[i]);
		}
		vector<string> c(sy.begin(), sy.end());
		for (int i =0; i < c.size(); i++) {
			cout << c[i] << " ";
		}
		cout << endl;
	}
	return 0;
}


