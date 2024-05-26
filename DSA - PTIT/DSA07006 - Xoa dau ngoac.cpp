#include <bits/stdc++.h>
#define __Tieu_Long__PROPTIT__ int main()
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
queue<string> str;
set<string> st;
void xoa_dau_ngoac(string s) {
    vector<pair<int, int>> pa;
    stack<int> stk;
    int len = s.size();
    for (int i = 0; i < len ; i++) {
        if (s[i] == '(') stk.push(i);
        if (s[i] == ')') {
            pa.push_back({stk.top(), i});
            stk.pop();
        }
    }
    for (auto x : pa) {
        string f = s;
        f.erase(x.fi, 1);
        f.erase(x.se - 1, 1);
        if (st.count(f) == 0) {
            st.insert(f);
            str.push(f);
        }
    }
}
__Tieu_Long__PROPTIT__{
    Fast();
    Test() {
        string s;
        cin >> s;
        str.push(s);
        while (!str.empty()) {
            string tmp = str.front();
            str.pop();
            xoa_dau_ngoac(tmp);
        }
        for (auto x : st) cout << x << endl;
    }
}