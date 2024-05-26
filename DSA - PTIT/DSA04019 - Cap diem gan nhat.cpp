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
    Tests(){
        int n;
        cin >> n;
        pair<double, double> a[n], b[n];
        for (int i = 0; i < n; i ++) {
            cin >> a[i].fi >> a[i].se;
            b[i].fi = a[i].se;
            b[i].se = a[i].fi;
        }
        sort(a, a + n); // sort theo x
        sort(b, b + n); // sort theo y;
        double _min = 1e18;
        for (int i = 1; i < n; i ++) {
            _min = min(_min, (sqrt((a[i].fi - a[i - 1].fi) * (a[i].fi - a[i - 1].fi) + (a[i].se - a[i - 1].se) * (a[i].se - a[i - 1].se))));
            _min = min(_min, (sqrt((b[i].fi - b[i - 1].fi) * (b[i].fi - b[i - 1].fi) + (b[i].se - b[i - 1].se) * (b[i].se - b[i - 1].se))));
        }
        cout << fixed << setprecision(6) << _min << endl;
    }
}