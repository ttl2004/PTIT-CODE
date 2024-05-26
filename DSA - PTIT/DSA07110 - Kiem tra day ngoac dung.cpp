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
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s;
		cin >> s;
		stack<int> st;
		int ok = 0;
		for (int i = 0; i < s.size(); i ++) {
			if (s[i] == ')' && !st.empty() && s[st.top()] == '(') st.pop();
	        else if (s[i] == ']' && !st.empty() && s[st.top()] == '[') st.pop();
	        else if (s[i] == '}' && !st.empty() && s[st.top()] == '{') st.pop();
	        else st.push(i);
		}
		if (st.size() == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
