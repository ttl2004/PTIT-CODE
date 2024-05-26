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
        int a[n + 5], dp[n + 1][k + 1];
        for (int i = 1; i <= n; i ++) {
            cin >> a[i];
            a[i] %= k;
        }
        for (int i = 0; i <= n; i ++) {
            for (int j = 0; j < k; j ++) {
                dp[i][j] = INT_MIN;
            }
        }
        dp[1][a[1]] = 1;
        for (int i = 2; i <= n; i ++) {
            for (int j = 0; j <= k - 1; j ++){
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - a[i] + k) % k] + 1);
            }
        }
        cout << dp[n][0] << endl;
	}
	return 0;
}
