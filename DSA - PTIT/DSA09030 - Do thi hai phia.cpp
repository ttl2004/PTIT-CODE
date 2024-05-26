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
int n, m;
vector<int> adj[1005], color(1005, -1), kt(1005, 0);
bool bfs(int i) {
    queue<int> qe;
    qe.push(i);
    color[i] = 0;
    kt[i] = 1;
    while (!qe.empty()) {
        int u = qe.front();
        qe.pop();
        for (int v : adj[u]) {
            if (color[v] == color[u]) return false;
            if (color[v] == -1) {
                color[v] = 1 - color[u];
                qe.push(v);
                kt[v] = 1;
            }
        }
    }
    return true;
}
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
           int x, y;
           cin >> x >> y;
           adj[x].pb(y);
           adj[y].pb(x);
        }
        int ok = 1;
        for (int i = 1; i <= n; i ++) {
            kt.clear();
            kt.resize(1005, 0);
            color.clear();
            color.resize(1005, -1);
            if (color[i] == -1 && !bfs(i)) {
                cout << "NO\n";
                ok = 0;
                break;
            }
        }
        if (ok) cout << "YES\n";
        for (int i = 1; i <= n; i ++) adj[i].clear();
        color.clear();
        kt.clear();
	}
}