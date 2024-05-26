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
__Tieu_Long__{
	Fast();
	Tests() {
        int n;
        string s, t;
        cin >> n >> s >> t;;
        set<string> a;
        for (int i = 0; i < n; i ++) {
            string x;
            cin >> x;
            if (x != s) a.insert(x);
        }
        queue<pair<string, int>> qe;
        qe.push({s, 1});
        while (qe.size()) {
            pair<string, int> tmp = qe.front();
            qe.pop();
            if (tmp.fi == t) {
                cout << tmp.se<< endl;
                break;
            }
            int len = tmp.fi.size();
            for (int i = 0; i < len; i ++) {
                string str = tmp.fi;
                for (char j = 'A'; j <= 'Z'; j ++) {
                    str[i] = j;
                    if ( a.find(str) != a.end()) {
                        qe.push({str, tmp.se + 1});
                        a.erase(str);
                    }
                }
            }
        }
	}
	return 0;
}
