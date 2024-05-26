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
    int sum = 0;
    stack<string> stk;
    for (auto x : s) {
        if (x >= '0' && x <= '9') stk.push(string(1, x));
        else{
            int fi, se;
            if (stk.size() >= 2) {
                fi = stoi(stk.top());
                stk.pop();
                se = stoi(stk.top());
                stk.pop();
                int tmp;
                if (x == '*') tmp = se * fi; 
                if (x == '/') tmp = se / fi; 
                if (x == '+') tmp = se + fi; 
                if (x == '-') tmp = se - fi; 
                if (x == '%') tmp = se % fi; 
                stk.push(to_string(tmp));
            }
            
        }
    }
    sum = stoi(stk.top());
    return sum;
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