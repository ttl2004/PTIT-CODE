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
int n, ans = 1e9, kt[1005];
vector<string> s, hv;

void Try(int i, int cnt) {
    if (i > n) {
        ans = min(ans, cnt);
        return;
    }
    for (int j = 1; j <= n; j ++) {
        if (!kt[j]) {
            kt[j] = 1;
            hv[i] = s[j];
            int count[127] = {0}, dem = 0;
            for (auto c : hv[i]) count[c] ++;
            for (auto c : hv[i - 1]) count[c] ++;
            for (int f = 'A'; f <= 'Z'; f ++) {
                if (count[f] == 2) dem ++;
            }
            if (cnt + dem < ans) Try(i + 1, cnt + dem);
            kt[j] = 0;
        }
    }
}
__Tieu_Long__PROPTIT__{
    Fast();
    Test() {
        memset(kt, 0, sizeof(kt));
        cin >> n;
        s.resize(n + 1);
        hv.resize(n + 1);
        int a[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
        }
        Try(1, 0);
        cout << ans << endl;
	}
}