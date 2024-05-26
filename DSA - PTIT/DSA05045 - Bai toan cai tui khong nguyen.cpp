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
		int n, w;
        cin >> n >> w;
        pair<pair<int, int>, double> arr[n + 1];
        for (int i = 0; i < n; i ++) {
            cin >> arr[i].fi.fi >> arr[i].fi.se;
            arr[i].se = 1.0 * arr[i].fi.fi / arr[i].fi.se;
        }
        sort(arr, arr + n, [] (pair<pair<int, int>, double> x, pair<pair<int, int>, double> y) {
            return x.se > y.se;
        });
        int Can_Nang = 0, idx = 0;
        double Gia_Tri = 0;
        for (int i = 0; i < n; i ++) {
            if (Can_Nang <= w) {
                Can_Nang += arr[i].fi.se;
                Gia_Tri += (double) arr[i].fi.fi;
                idx = i;
            }
        }
        if (Can_Nang > w) {
            Gia_Tri -= arr[idx].se * (Can_Nang - w);
        }
        cout << setprecision(2) << fixed << Gia_Tri << endl;
	}
}