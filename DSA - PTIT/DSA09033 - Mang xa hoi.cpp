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
vector<int> adj[100005];
bool kt[100005];
void dfs(int i) {
    kt[i] = true;
    for (auto x : adj[i]) {
        if (!kt[x]) {
            dfs(x);
        }
    }
}
__Tieu_Long__{
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
        dfs(1);
        int ok = 1;
        for (int i = 1; i <= n; i ++) {
            if (!kt[i]) {
                ok = 0;
                break;
            }
        }
        string res = ok ? "YES" : "NO";
        cout << res << endl;
        for (int i = 1; i <= n; i ++) adj[i].clear();
        memset(kt, false, sizeof(kt));
	}
	return 0;
}
