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
// Kiểm tra xem một kí tự có phải là toán tử hay không
bool check(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}
 
// Độ ưu tiên của các toán tử
int ktra(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}
 
// Hàm chuyển đổi biểu thức trung tố sang hậu tố
vector<string> Hau_To(string s) {
    stack<char> stk;
    vector<string> ve;
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (isalnum(s[i])) {// Kiểm tra xem kí tự có phải là toán hạng (chữ cái in hoa) hay không
            string str;
            while (i < len && isalnum(s[i])) {
                str += s[i];
                i++;
            }
            i --;
            ve.pb(str);
        } 
        else if (s[i] == '(') {
            stk.push(s[i]);
        } 
        else if (s[i] == ')') {
            while (!stk.empty() && stk.top() != '(') {
                char c = stk.top();
                ve.pb(string(1, c));
                stk.pop();
            }
            stk.pop(); // Loại bỏ dấu '(' khỏi ngăn xếp
        } 
        else if (check(s[i])) {
            while (!stk.empty() && ktra(stk.top()) >= ktra(s[i])) {
                ve.pb(string(1, stk.top()));
                stk.pop();
            }
            stk.push(s[i]);
        }
    }
    while (!stk.empty()) {
        ve.pb(string(1, stk.top()));
        stk.pop();
    }
    return ve;
}
ll to_num(string s) {
    ll num = 0;
    for (auto x : s) {
        num = num * 10 + (x - '0');
    }
    return num;
}
ll xuly(vector<string> s) {
    int len = s.size();
    stack<ll> stk;
    for (int i = 0; i < len; i ++) {
        if ((s[i] != "*" && s[i] != "/" && s[i] != "+" && s[i] != "-" && s[i] != "%" && s[i] != " ")) {
            stk.push(to_num(s[i]));
        }
        else{
            ll fi, se;
            if (stk.size() >= 2) {
                fi = stk.top();
                stk.pop();
                se = stk.top();
                stk.pop();
                ll tmp;
                if (s[i] == "*") tmp = se * fi; 
                if (s[i] == "/") tmp = se / fi;  
                if (s[i] == "+") tmp = se + fi; 
                if (s[i] == "-") tmp = se - fi; 
                if (s[i] == "%") tmp = se % fi; 
                stk.push(tmp);
            }
            
        }
    }
    return stk.top();
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
        vector<string> tmp = Hau_To(s);
        ll ans = xuly(tmp);
        cout << ans << endl;
    }
    return 0;
}
