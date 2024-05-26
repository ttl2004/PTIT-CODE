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
pair<int, int> oxy[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
int kt[1005][1005], n, k, m;
set<pair<pair<int, int>, pair<int, int>>> st;
map<pair<pair<int, int>, pair<int, int>>, int> mp;
map<pair<int, int>, int> mp1;

void bfs(int u, int v) {
    queue<pair<int, int>> qe;
    kt[u][v] = 1;
    qe.push({u, v});
    while (!qe.empty()) {
        pair<int, int> tmp = qe.front();
        qe.pop();
        for (int i = 0; i < 4; i ++) {
            int z = tmp.fi + oxy[i].fi, t = tmp.se + oxy[i].se, f = 0;
            if (!kt[z][t] && mp[{{z, t}, {tmp.fi, tmp.se}}]  == 0 && z > 0 && z <= n && t > 0 && t <= n) {
                qe.push({z, t});
                kt[z][t] = 1;
            }   
        }
    }
}
__Tieu_Long__{
	Fast();
	Test() {
        cin >> n >> k >> m;
        memset(kt, 0, sizeof(kt));
        for (int i = 0; i < m; i ++) {
            int u, v, x, y;
            cin >> u >> v >> x >> y;
            mp[{{u, v}, {x, y}}] = 1;
            mp[{{x, y}, {u, v}}] = 1;
        }
        pair<int, int> pa[k + 1];
        for (int i = 0; i < k; i ++) {
            cin >> pa[i].fi >> pa[i].se;
            mp1[{pa[i].fi, pa[i].se}] = 1;
        }
        set<pair<pair<int, int>, pair<int, int>>> st;
        for (int i = 0; i < k; i ++) {
            memset(kt, 0, sizeof(kt));
            bfs(pa[i].fi, pa[i].se);
            for (int j = 1; j <= n; j ++) {
                for (int l = 1; l <= n; l ++) {
                    if (kt[j][l] == 0 && mp1[{j, l}] == 1) {
                        st.insert({{j, l}, {pa[i].fi, pa[i].se}});
                        st.insert({{pa[i].fi, pa[i].se}, {j, l}});
                    }
                }
            }
        }
        cout << st.size() / 2 << endl;
	}
	return 0;
}
