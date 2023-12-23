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
#include <bits/stdc++.h>
#define long long long
#define pb push_back
#define endl '\n'
using namespace std;
long check(string s){
    int len = s.size();
    for (int  i = 0; i < len/2 ; i++) {
        if (s[i] != s[len - i - 1]) return 0;
    }
    return 1;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    vector<string> str;
    map<string, int> mp;
    for (string s; cin >> s;) {
        if (s.size() != 1 && check(s) == 1) {
            if (mp[s] == 0 ) str.pb(s);
            mp[s] ++;
        }
    }
    sort(begin(str), end(str),[] (string a, string b) {
        if (a.size() != b.size()) return a.size() > b.size();
        else{
            return a > b;
        }
    });
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << " " << mp[str[i]] << endl;
    }
	return 0;
}