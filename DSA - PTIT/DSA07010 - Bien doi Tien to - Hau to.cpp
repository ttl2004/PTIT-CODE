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

__Tieu_Long__{
    Fast();
    Tests() {
        string s;
        cin >> s;
        int len = s.size();
        stack<string> stk;
        for (int i = len  - 1; i >= 0; i --) {
            if (s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^') {
                string x = stk.top();
                stk.pop();
                string y = stk.top();
                stk.pop();
                string tmp = x + y + s[i]; 
                stk.push(tmp);
            }
            else stk.push(string(1, s[i]));
        }
        while (stk.size()) {
            cout << stk.top();
            stk.pop();
        }
        cout << endl;
	}
	return 0;
}