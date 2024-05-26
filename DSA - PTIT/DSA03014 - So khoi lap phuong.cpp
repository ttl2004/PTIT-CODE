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
int check(string x, string y)  {
    int i = 0, j = 0;
    while (i < x.length() && j < y.length()) {
        if (x[i] == y[j]) {
            i ++;
            j ++;
        }
        else i ++;
    }
    return j == y.length();
}

__Tieu_Long__{
    Fast();
    Tests(){
        string s;
        cin >> s;
        ll len = s.length();
        ll k = cbrt(pow(10, len)), ok = 0;
        for (ll i = k; i > 0; i --) {
            ll tmp = i * i * i;
            if (check(s, to_string(tmp))) {
                ok = 1;
                cout << tmp << endl;
                break;
            }
        }
        if (!ok) cout << "-1\n";
    }
}