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
int kt[1000][1000], a[1000][1000], n, m, ans  = 1e9;
pair<int, int > oxy[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
struct Compare {
    bool operator() (const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
        return a.first > b.first; // Ưu tiên giá trị nhỏ hơn
    }
};

void bfs(int i, int j) {
    kt[i][j] = 1;
    priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int, int>>>, Compare> pq;
    pq.push({a[i][j], {i, j}});
    while (!pq.empty()) {
        pair<int, pair<int, int>> tmp = pq.top();
        pq.pop();
        if (tmp.se.fi == n && tmp.se.se == m) {
            ans = min(ans, tmp.fi);
            return;
        }
        for (int i = 0; i < 4; i++) {
            int x = tmp.se.fi + oxy[i].first;
            int y = tmp.se.se + oxy[i].second;
            if (x >= 1 && y >= 1 && x <= n && y <= m && kt[x][y] == 0) {
                kt[x][y] = 1;
                pq.push({tmp.fi + a[x][y], {x, y}});
            }
        }
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        memset(kt, 0, sizeof(kt));
        memset(a, 0, sizeof(a));
        ans = 1e9;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j ++) {
                cin >> a[i][j];
            }
        }
        bfs(1, 1);
        if (ans == 1e9) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
