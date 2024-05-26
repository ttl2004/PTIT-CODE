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

__Tieu_Long__{
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s;
		cin >> s;
		int len = s.size();
		stack<char> stk;
		for (int i = 0; i < len; i ++) {
			if (s[i] != ')') stk.push(s[i]);
			else {
				string tmp;
				while (!stk.empty() && stk.top() != '(') {
					tmp = stk.top() + tmp;
					stk.pop();
				}
				stk.pop(); //xoa dau (
				char c;
				if (!stk.empty()) c = stk.top(); //lay dau trc dau (
				for (auto x : tmp) {
					if (c == '-' && !tmp.empty()){
						if (x == '-') stk.push('+');
						else if (x == '+') stk.push('-');
						else stk.push(x);
					}
					else if (!tmp.empty()) stk.push(x);
				}
			}
		}
		string ans;
		while (!stk.empty()) {
			ans = stk.top() + ans;
			stk.pop();
		}
		cout << ans << endl;
	}
	return 0;
}
