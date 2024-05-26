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
int e, v;
vector<int> adj[1005];
int kt[1005], parent[1005];
bool dfs_chutrinh(int i) {
    kt[i] = 1;
    for (auto x : adj[i]) {
        if (!kt[x]) {
            parent[x] = i;
            if (dfs_chutrinh(x)) return true;
        }
        else if (x != parent[i]) return true;
    }
    return false;
}
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> e >> v;
        for (int i = 0; i < v; i ++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ok = 0;
        for (int i = 1; i <= e; i ++) {
            if (kt[i] == 0 && dfs_chutrinh(i)) {
                cout << "YES\n";
                ok = 1;
                break;
            }
        }
        if (!ok) cout << "NO\n";
        for (int i = 1; i <= e; i ++) adj[i].clear();
        memset(kt, 0, sizeof(kt));
        memset(parent, 0, sizeof(parent));
	}
}