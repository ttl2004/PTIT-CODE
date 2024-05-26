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
        cin >> n;
        queue<pair<int, int>> qe;
        map<int, int> mp;
        qe.push({n, 0});
        while (!qe.empty()) {
            pair<int, int> tmp = qe.front();
            qe.pop();
            if (tmp.fi ==  2) {
                cout << tmp.se + 1 << endl;
                break;
            }
            if (mp[tmp.fi - 1] == 0) {
                qe.push({tmp.fi - 1, tmp.se + 1});
                mp[tmp.fi - 1] = 1;
            }
            for (int i = 2; i <= sqrt(tmp.fi); i ++) {
                int j = tmp.fi / i;
                if (tmp.fi % i == 0 && mp[j] == 0) {
                    qe.push({j, tmp.se + 1});
                    mp[j] = 1;
                }
            }
        }
	}
	return 0;
}
