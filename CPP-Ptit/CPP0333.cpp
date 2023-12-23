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
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    string s, s1;
    getline(cin, s);
    vector<string> str;
    stringstream ss(s);
    while (ss >> s1) {
        for (int i = 0; i < s1.size(); i++){
            if (s1[i] >= 'A' && s1[i] <= 'Z') s1[i] += 32;
        }
        s1[0] -= 32;
        str.pb(s1);
    }
    string s2;
    s2 = str[str.size() - 1];
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] >= 'a' && s2[i] <= 'z') s2[i] -= 32;
    }
    for (int i = 0; i < str.size() - 1; i++){
        cout << str[i];
        if (i != str.size() - 2) cout << " ";
        else cout << ", ";
    }
    cout << s2;
	return 0;
}