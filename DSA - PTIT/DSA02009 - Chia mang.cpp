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
int ok = 0, n, k, a[100], sum;
void Try(int s, int cnt, int idx) {
    if (ok) return;
    if (cnt == k) {
        ok = 1;
        return;
    }
    for (int i = idx; i < n; i ++) {
        if (s == sum) {
            Try(0, cnt + 1, idx);
        }
        else if (s < k) {
            Try(s + a[i], cnt, i);
        }
        else return;
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        sum = 0;
        ok = 0;
        cin >> n >> k;
        int sum = 0;
        for (int i = 0; i < n; i ++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % k != 0) cout << "0\n";
        else {
            sum /= k;
            Try(0, 0, 0);
            if (ok) cout << "1\n";
            else cout << "0\n";
        }
    }
    return 0;
}
