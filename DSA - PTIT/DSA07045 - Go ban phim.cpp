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
	Test() {
        string s;
        cin >> s;
        stack<char> stk, tmp;
        int len = s.size();
        for (int i = 0; i < len; i ++) {
            if (s[i] == '<') {
                if (!stk.empty()) {
                    tmp.push(stk.top());
                    stk.pop();
                }
            }
            else if (s[i] == '>') {
                if (!tmp.empty()) {
                    stk.push(tmp.top());
                    tmp.pop();
                }
            }
            else if (s[i] == '-'){
                if (!stk.empty()) stk.pop();
            }
            else stk.push(s[i]);
        }
        while (!stk.empty()) {
            tmp.push(stk.top());
            stk.pop();
        }
        while (!tmp.empty()) {
            cout << tmp.top();
            tmp.pop();
        }
	}
	return 0;
}
