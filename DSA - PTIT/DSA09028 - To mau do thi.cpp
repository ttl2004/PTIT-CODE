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
int e, v, m;
vector<pair<int, int>> pa;
int color[1005], adj[1005][1005];

__Tieu_Long__{
    Fast();
    Tests() {
        memset(adj, 0, sizeof(adj));
        cin >> e >> v >> m;
        int cnt[e + 1] = {}; // lưu  bậc của đỉnh
        for (int i = 0; i < v; i++) {
           int x, y;
           cin >> x >> y;
           cnt[x] ++;
           cnt[y] ++;
           adj[x][y] = adj[y][x] = 1; // đánh dấu có cạnh  x -> y và y -> x
        }
        for (int i = 1; i <= e; i ++) pa.pb({cnt[i], i});
        //sort theo bậc giảm dần
        sort(pa.begin(), pa.end(), [](pair<int, int> x, pair<int, int> y) {
            return x.fi > y.fi;
        });
        int mau = 1;
        for (auto x : pa) {
            int dinh = x.se;
            if (!color[dinh]) {
                color[dinh] = mau;
                // Duyệt và tìm đỉnh ko có cạnh với dinh đang xét
                for (int i = 1; i <= e; i ++) {
                    if (!adj[dinh][i] && dinh != i) {
                        color[i] = mau;
                    }
                }
                mau ++;
            }
        }
        if (mau - 1 > m) cout << "NO\n";
        else cout << "YES\n";
        memset(adj, 0, sizeof(adj));
        memset(color, 0, sizeof(color));
        pa.clear();
	}
}