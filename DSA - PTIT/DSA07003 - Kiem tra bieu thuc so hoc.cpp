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
	cin.ignore();
	while (t --) {
		string s;
		getline(cin, s);
		stack<char> st;
		int check = 1;
		for (int i = 0; i < s.size(); i ++) {
			if (s[i] != ')') st.push(s[i]);
	        else {
	            bool ok = 0;
	            while (!st.empty()) {
	                char c = st.top(); st.pop();
	                if (c == '+' || c == '-' || c == '*' || c == '/') ok = 1;
	                if (c == '(') break;
	            }
	            if (ok == 0) {
	                check = 0;
	                break;
	            }
	        }
		}
		if (check == 0) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
