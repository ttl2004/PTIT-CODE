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
int xuly(string s) {
    int len = s.size();
    stack<string> stk;
    for (int i = len - 1; i >= 0; i --) {
        if (s[i] >= '0' && s[i] <= '9') stk.push(string(1, s[i]));
        else{
            int fi, se;
            if (stk.size() >= 2) {
                fi = stoi(stk.top());
                stk.pop();
                se = stoi(stk.top());
                stk.pop();
                int tmp;
                if (s[i] == '*') tmp = fi * se; 
                if (s[i] == '/') tmp = fi / se; 
                if (s[i] == '+') tmp = fi + se; 
                if (s[i] == '-') tmp = fi - se; 
                if (s[i] == '%') tmp = fi % se; 
                stk.push(to_string(tmp));
            }
            
        }
    }
    return stoi(stk.top());
}
 
int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans = xuly(s);
        cout << ans << endl;
    }
    return 0;
}