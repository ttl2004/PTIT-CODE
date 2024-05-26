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
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.se > b.se;
}

__Tieu_Long__{
    Fast();
    Tests(){
        int n;
        cin >> n;
        pair<ll, ll> a[n + 5];
        ll time = 0;
        for (int i = 0; i < n; i ++) {
            ll stt;
            cin >> stt >> a[i].fi >> a[i].se;
        }
        sort (a, a + n, cmp);
        ll  sum = 0, cnt = 0, cot[1005] = {0};
        for (int i = 0; i < n; i ++) {
            while (cot[a[i].fi] == 1 && a[i].fi > 0) a[i].fi --; // nếu cột time của a[i].fi hiện tại đã có công việc thì giảm a[i].fi đi 1 đơn vị để sang cột time khác
            if (cot[a[i].fi] == 0 && a[i].fi > 0) {
                sum += a[i].se;
                cot[a[i].fi] = 1;
                cnt ++;
            }
        }
        cout << cnt << " " << sum << endl;
    }
}