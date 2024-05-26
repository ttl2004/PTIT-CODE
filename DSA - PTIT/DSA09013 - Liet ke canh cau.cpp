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
vector<vector<int>> adj;
vector<pair<int, int>> pa;
vector<bool> kt;
int V , E, u , v, So_Lien_Thong;
void bfs(int k) {
    queue<int> qe;
    qe.push(k);
    while (!qe.empty()) {
        int tmp = qe.front();
        qe.pop();
        kt[tmp] = 1;
        for (int f : adj[tmp]) {
            if ((tmp == u && f == v) || (tmp == v && f == u)) continue;
            if (!kt[f]) {
                qe.push(f);
            }
        }
    }
}
void dfs(int k) {
    kt[k] = 1;
    for (int f : adj[k]) {
        if ((k == u && f == v) || (k == v && f == u)) continue;
        if (!kt[f]) {
            dfs(f);
        }
    }
}
void Canh_Cau() {
    kt.clear(); 
    kt.resize(V + 1, false);
    int So_Lien_Thong_Moi = 0;
    for (int i = 1; i <= V; i ++) {
        if (!kt[i]) {
            dfs(i);
            So_Lien_Thong_Moi ++;
        }
    }
    if (So_Lien_Thong < So_Lien_Thong_Moi) {
        cout << u << " " << v << " ";
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> V >> E;
        So_Lien_Thong = 0;
        u = v = -1;
        adj.clear(); 
        adj.resize(V + 1);
        pa.clear(); 
        pa.resize(E + 1);
        kt.clear(); 
        kt.resize(V + 1, false);
       
       for (int i = 1; i <= E; i ++) {
           int x, y;
           cin >> x >> y;
           pa[i] = {x, y};
           adj[x].push_back(y);
           adj[y].push_back(x);
       }
       for (int i = 1; i <= V; i ++) {
           if (!kt[i]) {
               dfs(i);
               So_Lien_Thong ++;
           }
       }
       for (int i = 1; i <= E; i ++) {
            u = pa[i].fi, v = pa[i].se;
            Canh_Cau();
       }
        cout << endl;
    }
    return 0;
}
