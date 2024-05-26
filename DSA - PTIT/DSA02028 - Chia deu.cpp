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

int n, k, ans = 0, sum = 0;
int a[100005], dp[100005];
 void Try(int i, int cnt) {
    if (cnt == k && i == n) {
        ans ++;
        return;
    }
    for (int j = i + 1; j <= n; j ++) {
        if (dp[j] - dp[i] == sum) Try(j, cnt + 1);
    }
}
__Tieu_Long__PROPTIT__{
    Fast();
    Test() {
        dp[0] = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i ++) {
            cin >> a[i];
            dp[i] = a[i] + dp[i - 1];
            sum += a[i];
        }
        if (sum % k != 0) cout << "0\n";
        else {
            sum /= k;
            Try(0, 0);
            cout << ans << endl;
        }
    }
}