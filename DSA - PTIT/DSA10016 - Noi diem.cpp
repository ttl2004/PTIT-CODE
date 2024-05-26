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
const double INF = 1e9;
int n;
vector<int> adj[1005];
map<int, int> kt;
struct tt{
    int u, v;
    double w;
};
bool cmp (tt a, tt b) {
    return a.w < b.w;
}
double kc(pair<double, double> a, pair<double, double> b) {
    return sqrt((a.fi - b.fi) * (a.fi - b.fi) + (a.se - b.se) * (a.se - b.se));
}
void dfs(int u) {
    kt[u] = 1;
    for (auto x : adj[u]) {
        if (!kt[x]) {
            dfs(x);
        }   
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> n;
        vector<pair<double, double>> arr(n + 1);
        vector<tt> arr2;
        double kcach[105][105];
        memset(kcach, 0, sizeof(kcach));
        for (int i = 1; i <= n; i ++) {
            cin >> arr[i].fi >> arr[i].se;
        }
        for (int i = 1; i <= n; i ++) {
            for (int j = 1; j <= n; j ++) {
                kcach[i][j] = kc(arr[i], arr[j]); // lấy khoảng cách từ đỉnh i -> j
            }
        }
        for (int i = 1; i <= n; i ++) {
            for (int j = 1; j <= n; j ++) {
                arr2.pb({i, j, kcach[i][j]}); // push đỉnh i và j cộng khoảng cách (i, j);
            }
        }
        // sử dụng kruskal
        sort(arr2.begin(), arr2.end(), cmp);
        double ans = 0;
        n = arr2.size();
        for (int i = 0; i < n; i ++) {
            kt.clear();
            dfs(arr2[i].u);
            if (kt[arr2[i].v] == 0) {
                ans += arr2[i].w;
                adj[arr2[i].u].pb(arr2[i].v);
                adj[arr2[i].v].pb(arr2[i].u);
            }
        }
        cout << fixed << setprecision(6) << ans << endl;
        for (int i = 0; i <= 1004; i ++) adj[i].clear();
        kt.clear();
	}
}