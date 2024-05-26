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
int ok[25][25], ans = 1;
vector<int> adj[25];
void dfs(int i, int cnt) {
    ans = max(ans, cnt);
    for (auto j : adj[i]) {
        if (!ok[i][j]) {
            ok[i][j] = ok[j][i] = 1;
            dfs(j, cnt + 1);
            ok[i][j] = ok[j][i] = 0;
        }
    }
}
__Tieu_Long__PROPTIT__{
    Fast();
    Tests() {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i ++) {
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for (int i = 0; i < n; i ++) {
            memset(ok, 0, sizeof(ok));
            dfs(i, 0);
        }
        cout << ans << endl;
        for (int i = 0; i < n; i ++) adj[i].clear();
        ans = 1;
	}
}