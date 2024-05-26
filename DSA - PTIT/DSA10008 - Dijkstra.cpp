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
const ll INF = 1e18;
int v, e, st;
vector<pair<ll, int>> adj[1005];
void Dijkstra(int st) {
    vector<ll> d(v + 1, INF);
    d[st] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, st});
    while (pq.size()) {
        pair<ll, int> tmp = pq.top();
        pq.pop();
        ll kc = tmp.fi;
        int u = tmp.se;
        if (kc > d[u]) continue; // đg đi cũ có kcach lớn hơn đg đi mới thì bỏ qua
        //Cập nhập kcach moi
        for (auto x : adj[u]) {
            ll i = x.fi;
            int j = x.se;
            if (d[j] > d[u] + i) {
                d[j] = d[u] + i;
                pq.push({d[j], j});
            }
        }
    }
    for (int i = 1; i <= v; i ++) cout << d[i] << " ";
    cout << endl;
}
__Tieu_Long__{
	Fast();
	Tests() {
        cin >> v >> e >> st;
        for (int i = 0; i < e; i ++) {
            int x, y;
            ll kc;
            cin >> x >> y >> kc;
            adj[x].pb({kc, y});
            adj[y].pb({kc, x});
        }
        Dijkstra(st);
        for (int i = 1; i <= v; i ++) adj[i].clear();
	}
	return 0;
}
