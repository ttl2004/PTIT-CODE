#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
#define Fast(); ios_base :: sync_with_stdio (0); cin.tie(0); cout.tie(0);
#define Tests() int t; cin >> t; while (t --)
#define Test() int t = 1; while (t --)
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
vector<string> Tach_Chuoi(string s) {
	vector<string> tmp;
	stringstream ss(s);
	string s1;
	while (getline(ss, s1, '+')) {
		tmp.pb(s1);
	}
	return tmp;
}
ll Stoll(string s) {
	stringstream ss(s);
	ll f;
	ss >> f;
	return f;
}
__Tieu_Long__{
	Fast();
	int t;
	cin >> t;
	cin.ignore();
	while (t --) {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		vector<string> str1 = Tach_Chuoi(s1);
		vector<string> str2 = Tach_Chuoi(s2);
		map<ll, ll> mp;
		for (auto x : str1) {
			string heso, mu;
			stringstream ss(x);
			getline(ss, heso, '*'); // tach phan he so
			ss.ignore(); //bo qua ky tu x
			ss.ignore(); // bo qua ky tu ^
			ss >> mu; // lay so mu
			mp[Stoll(mu)] += Stoll(heso);
		}
		for (auto x : str2) {
			string heso, mu;
			stringstream ss(x);
			getline(ss, heso, '*'); // tach phan he so
			ss.ignore(); //bo qua ky tu x
			ss.ignore(); // bo qua ky tu ^
			ss >> mu; // lay so mu
			mp[Stoll(mu)] += Stoll(heso);
		}

		stack<string> stk;
		for (auto x : mp) {
			string s;
			s += to_string(x.se) + "*x^" + to_string(x.fi);
			stk.push(s);
		}
		while (!stk.empty()) {
			cout << stk.top();
			if (stk.size() != 1) cout << " + ";
			stk.pop();
		}
		cout << endl;
	}
	return 0;
}

