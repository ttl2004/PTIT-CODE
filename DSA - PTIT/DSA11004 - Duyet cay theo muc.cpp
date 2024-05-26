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
pair<int, int > pa[1005];
bool kt[1005];
int n, parent;
void bfs(int i) {
    queue<int> qe;
    qe.push(parent);
    kt[parent] = 1;
    while (!qe.empty()) {
        int u = qe.front();
        qe.pop();
        cout << u << " ";
        if (pa[u].fi != 0 && kt[pa[u].fi] == 0) {
            qe.push(pa[u].fi);
            kt[pa[u].fi] = 1;
        }
        if (pa[u].se != 0 && kt[pa[u].se] == 0) {
            qe.push(pa[u].se);
            kt[pa[u].se] = 1;
        }
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        memset(kt, 0, sizeof(kt));
        for (int i = 1; i <= 1000; i ++) pa[i].fi = pa[i].se = 0;
        cin >> n;
        for (int i = 1; i <= n; i ++) {
            int u, v;
            string x;
            cin >> u >> v >> x;
            if (i == 1) parent = u;
            if (x == "L") pa[u].fi = v;
            else pa[u].se = v;
        }
        bfs(parent);
        cout << endl;
    }
    return 0;
}
