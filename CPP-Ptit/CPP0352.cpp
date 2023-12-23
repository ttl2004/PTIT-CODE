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
void lower(string &s) {
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	while (t--) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		string s1;
		vector<string> str;
		while (ss >> s1) {
			lower(s1);
			str.pb(s1);
		}
		string s2;
		s2 += str[str.size() - 1];
		for (int  i = 0; i < str.size() - 1; i ++)	{
			s2+= str[i][0];
		}
		if (mp[s2] > 0) {
			cout << s2 << mp[s2] + 1;
		}
		else cout << s2;
		mp[s2]++;
		cout << "@ptit.edu.vn\n";
	}

	return 0;
}
