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
bool check[100005];
int n, _max = 0;
void bfs(int u) {
    queue<pair<int, int>> qe;
    qe.push({u, 0});
    check[u] = true;
    while (!qe.empty()) {
        pair<int, int> tmp = qe.front();
        qe.pop();
        for (int v : adj[tmp.fi]) {
            if (!check[v]) {
                check[v] = true;
                qe.push({v, tmp.se + 1});
                _max = max(_max, tmp.se + 1);
            }
        }
    }
}
__Tieu_Long__ {
    Fast();
    Tests() {
        cin >> n;
        int parent;
        for (int i = 0; i < n - 1; i ++) {
            int u, v;
            cin >> u >> v;
            if (i == 0) parent = u;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        bfs(parent);
        cout << _max << endl;
        for (int i = 1; i <= n; i ++) adj[i].clear();
        memset(check, false, sizeof(check));
        _max = 0;
    }
}
