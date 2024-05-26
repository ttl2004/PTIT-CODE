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
int e, v, Begin;
vector<int> adj[1005];
vector<pair<int, int>> ans;
int kt[1005], parent[1005];
void bfs (int i) {
    queue<int> qe;
    qe.push(i);
    kt[i] = 1;
    while (!qe.empty()) {
        int tmp = qe.front();
        qe.pop();
        if(parent[tmp] != 0) ans.pb({parent[tmp], tmp});
        for (int f : adj[tmp]) {
            if (!kt[f]) {
                qe.push(f);
                kt[f] = 1;
                parent[f] = tmp;
            }
        }
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> e >> v >> Begin;
        for (int i = 0; i < v; i ++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ok = 1;
        bfs(Begin);
        for (int i = 1; i <= e; i ++) {
            if (kt[i] == 0) {
                ok = 0;
                break;
            }
        }
        if (!ok) cout << "-1\n";
        else for (auto x : ans) cout << x.fi << ' ' << x.se << endl;
        ans.clear();
        for (int i = 1; i <= e; i ++) adj[i].clear();
        memset(kt, 0, sizeof(kt));
        memset(parent, 0, sizeof(parent));
	}
}