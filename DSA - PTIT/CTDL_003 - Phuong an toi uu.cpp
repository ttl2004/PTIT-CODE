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
 vector<int> ans;
 int dp[105][10005];
void TruyVet(int n, int w, int c[], int a[]) {
    if (n == 0) return;
    if (dp[n][w] == dp[n - 1][w]) TruyVet(n - 1, w, c, a);
    else {
        TruyVet(n - 1, w - a[n], c, a);
        ans[n - 1] = 1;
    }
}
__Tieu_Long__{
	Fast();
	Test() {
        int n, w;
        cin >> n >> w;
        ans.resize(n, 0);
        int c[n + 1], a[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> c[i];
        }
        for (int i = 1; i <= n; i ++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i ++) {
            for (int j = 1; j <= w; j ++) {
                dp[i][j] = dp[i - 1][j];
                if (j >= a[i]) {    
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
                }   
            }
        }
        cout << dp[n][w] << endl;
        TruyVet(n, w, c, a);
        for (auto x : ans) cout << x << " ";
	}
	return 0;
}
