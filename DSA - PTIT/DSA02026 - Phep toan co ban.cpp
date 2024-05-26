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
int ktra = 0;
string s;
char toan_tu[2] = {'+', '-'};
int Stoi(string s) {
    stringstream ss(s);
    int f;
    ss >> f;
    return f;
}
bool check() {
    int x = Stoi(s.substr(0, 2));
    int y = Stoi(s.substr(5, 2));
    int z = Stoi(s.substr(10, 2));
    if (x < 10 || y < 10 || z < 10) {
        return false;
    }
    if (s[3] == '+') {
        return x + y == z;
    }
    else if (s[3] == '-') {
        return x - y == z;
    }
}
void Try(int i) {
    if (ktra == 1) return;
    if (i == s.size()) {
        if (check()) {
            ktra = 1;
            cout << s << endl;
        }
        return;
    }
    if (s[i] == '?') {
        if (i == 3) {
            for (int j = 0; j < 2; j ++) {
                s[i] = toan_tu[j];
                Try(i + 1);
            }
        }
        else {
            for (int j = 0; j <= 9; j ++) {
                s[i] = j + '0';
                Try(i + 1);
            }
        }
        s[i] = '?';
    }
    else Try(i + 1);
}
__Tieu_Long__PROPTIT__{
    int t;
    cin >> t;
    cin.ignore();
    while (t --) {
        getline(cin, s);
        int ok = 1;
        for (auto x : s) {
            if (x == '*' || x == '/') {
                cout << "WRONG PROBLEM!\n";
                ok = 0;
                break;
            }
        }
        if (ok) {
            Try(0);
            if (ktra == 0) cout << "WRONG PROBLEM!\n";
            ktra = 0;
        }
    }
}