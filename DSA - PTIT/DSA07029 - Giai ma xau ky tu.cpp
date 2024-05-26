#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
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
int Stoi(string s) {
	stringstream ss(s);
	int f;
	ss >> f;
	return f;
}
int check(string s) {
	for (auto x : s) {
		if (!(x >= '0' && x <= '9')) return 0;
	}
	return 1;
}
__Tieu_Long__{
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s;
		cin >> s;
		stack<char> stk;
		int len = s.size();
		for (int i = 0; i < len; i ++) {
			if (s[i] != ']') stk.push(s[i]);
			else {
				string tmp;
				while (!stk.empty() && stk.top() != '[') {
					tmp = stk.top() + tmp;
					stk.pop();
				}
				stk.pop();
				string number;
				while (!stk.empty() && stk.top() >= '0' && stk.top() <= '9') {
					number = stk.top() + number;
					stk.pop();
				}
				int k = 1;
				if (!number.empty()) k = Stoi(number);
				string str;
				while (k --) str += tmp;
				for (auto x : str) stk.push(x);
			}
		}
		string kq;
		while (!stk.empty()) {
			kq = stk.top() + kq;
			stk.pop();
		}
		cout << kq << endl;
	}
	return 0;
}
