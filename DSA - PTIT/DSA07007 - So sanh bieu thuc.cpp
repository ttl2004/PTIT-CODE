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
string xuly(string s) {
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
    string kq;
    while (!stk.empty()) {
        kq = stk.top() + kq;
        stk.pop();
    }
    return kq;
}
__Tieu_Long__{
	Fast();
	Tests() {
        string s1, s2;
        cin >> s1 >> s2;
        s1 = xuly(s1);
        s2 = xuly(s2);
        if (s1 == s2) cout << "YES\n";
        else cout << "NO\n";
	}
	return 0;
}
