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
const int INF = 1e9;
__Tieu_Long__{
    Fast();
    Test() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> ans(n + 1, vector<int> (n + 1, INF));
        for (int i = 0; i < m; i ++) {
            int x, y, w;
            cin >> x >> y >> w;
            ans[x][y] = w;
            ans[y][x] = w;
        }
        for (int k = 1; k <= n; k ++) {
            ans[k][k] = 0;
            for (int i = 1; i <= n; i ++) {
                for (int j = 1; j <= n; j ++) {
                    ans[i][j] = min(ans[i][j], ans[i][k] + ans[k][j]);
                }
            }
        }
        int q;
        cin >> q;
        while (q --) {
            int x, y;
            cin >> x >> y;
            cout << ans[x][y] << endl;
        }
	}
}