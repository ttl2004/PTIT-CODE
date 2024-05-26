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
vector<int> adj[1005];
bool check[1005];
int n, truoc[1005];
void dfs(int u, int v) {
    check[u] = true;
    if (u == v) return;
    for (auto x : adj[u]) {
        if (!check[x]) {
            dfs(x, v);
            truoc[x] = u;
        }
    }
}
__Tieu_Long__ {
    Fast();
    Tests() {
        cin >> n;
        for (int i = 0; i < n - 1; i ++) {
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        int q;
        cin >> q;
        while (q --) {
            int u, v;
            cin >> u >> v;
            dfs(u, v);
            stack<int> st;
            while (v != u) {
                st.push(v);
                v = truoc[v];
            }
            cout << st.size() << endl;
            memset(check, false, sizeof(check));
        }
        for (int i = 1; i <= n; i ++) adj[i].clear();
        memset(check, false, sizeof(check));
    }
}
