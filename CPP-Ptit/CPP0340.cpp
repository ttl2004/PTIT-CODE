#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'

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

int main(){
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
   	int t;
    cin >> t;
    while (t-- ){
        int m, n;
        string s;
        cin >> m >> n >> s;
        long long dp[m][n];
        memset(dp, 0, sizeof(dp));
        dp[0][(s[0] - '0') % n]++;
        for (int i = 1; i < m; i++) {
            dp[i][(s[i] - '0') % n]++;
            for (int j = 0; j < n; j++) {
                dp[i][j] += dp[i - 1][j];
                dp[i][(j * 10 + (s[i] - '0')) % n] += dp[i - 1][j];
            }
        }
        cout << dp[m - 1][0] << endl;
    }
    return 0;
}
