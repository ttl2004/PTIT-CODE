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
int kt[1005];
struct tt{
    int u, v, w;
};
bool cmp (tt a, tt b) {
    return a.w < b.w;
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
        cin >> e >> v;
        vector<tt> arr(v);
        for (int i = 0; i < v; i ++) {
            cin >> arr[i].u >> arr[i].v >> arr[i].w;
        }
        sort(arr.begin(), arr.end(), cmp);
        int ans = 0;
        for (int i = 0; i < v; i ++) {
            memset(kt, 0, sizeof(kt));
            dfs(arr[i].u);
            if (kt[arr[i].v] == 0) {
                ans += arr[i].w;
                adj[arr[i].u].pb(arr[i].v);
                adj[arr[i].v].pb(arr[i].u);
            }
        }
        cout << ans << endl;
        for (int i = 1; i <= e; i ++) adj[i].clear();
        memset(kt, 0, sizeof(kt));
	}
}