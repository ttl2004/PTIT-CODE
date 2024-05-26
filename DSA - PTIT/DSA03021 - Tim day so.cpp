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
// Tham kh?o: https://www.facebook.com/groups/laptrinh.IT/permalink/7606135062738386
int dd[2005][2005];
__Tieu_Long__PROPTIT__{
    Fast();
    Test() {
        int n;
        cin >> n;
        int a[n + 5];
        memset(dd, 0, sizeof(dd));
        for (int i = 0; i < n; i ++) cin >> a[i];
        sort(a, a + n);
        for (int i = 1; i <= 2000; i ++) {
            dd[i][0] = i + 1;
            for (int j = 1; j <= i; j ++) {
                int x = i / j;
                if (dd[i][x] == 0) dd[i][x] = j;
            }
        }
        int _min = a[0], ans = 1e9;
        for (int  i = 0; i <= _min; i ++) {
            bool check = true;
            int sum = 0;
            for (int j = 0; j < n; j ++){
                sum += dd[a[j]][i];
                if (dd[a[j]][i] == 0) {
                    check = false;
                    break;
                }
            }
            if (check == true && sum < ans) {
                ans = sum;
            }
        } 
        cout << ans;
    }
}