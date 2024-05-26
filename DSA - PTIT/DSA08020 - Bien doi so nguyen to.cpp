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
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pb push_back
using namespace std;
int check(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        queue<pair<string, int>>qe;
        qe.push({s, 0});
        map<string, int> kt;
        kt[s] = 1;
        while(qe.size()) {
            pair<string, int> a = qe.front();
            qe.pop();
            if (a.first == t) {
                cout << a.second << "\n";
                break;
            }
            for (int i = 0; i < 4; i++) {
                for (char x = '0' ; x <= '9'; x++) {
                    string str = a.first;
                    str[i] = x;
                    if (kt[str] == 0 && stoi(str) >= 1000 && check(stoi(str)) == 1) {
                        qe.push({str, a.second + 1});
                        kt[str] = 1;
                    }
                }
            }
        }
    }
}