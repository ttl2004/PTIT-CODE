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
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= k; i ++) cin >> a[i];
        int i = k;
        while (i >= 1 && a[i] == a[i - 1] + 1) i --;
        if ( i != 0) a[i] --;
        for (int j = i + 1; j <= k; j ++) {
            a[j] = n - k + j;
        }
        for (int j = 1; j <= k; j ++) cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
