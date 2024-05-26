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

__Tieu_Long__PROPTIT__{
    Fast();
    Tests() {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i ++) cin >> a[i];
        sort(a, a + n);
        int ans = n, so_cap = 0;
        int i =  (n / 2) - 1, j = n - 1;
        while (i >= 0 && j >= n / 2) {
            if (a[j] >= 2 * a[i]) {
                ans -= 2;
                so_cap ++;
                i --;
                j --;
            }
            else i --;
        }
        cout << ans + so_cap << endl;
    }
}