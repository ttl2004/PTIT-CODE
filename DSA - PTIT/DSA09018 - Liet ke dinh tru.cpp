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
int v, e;
vector<int> kt;
vector<vector<int>> adj;
void dfs(int i) {
    kt[i] = 1;
    for (auto x : adj[i]) {
        if (kt[x] == 0) {
            dfs(x);
        }
    }
}
__Tieu_Long__{
	Fast();
	Tests() {
      cin >> v >> e;
      adj.clear();
      adj.resize(v + 1);
      kt.clear();
      kt.resize(v + 1, 0);
      for (int i = 0; i < e; i++) {
          int x, y;
          cin >> x >> y;
          adj[x].pb(y);
          adj[y].pb(x);
      }
      int cnt = 0;
      for (int i = 1; i <= v; i++) {
          if (kt[i] == 0) {
              dfs(i);
              cnt ++;
          }
      }
      for (int i = 1; i <= v; i ++) {
          kt.clear();
          kt.resize(v + 1, 0);
          kt[i] = 1;
          int tmp = 0;
          for (int i = 1; i <= v; i ++) {
              if (kt[i] == 0) {
                  dfs(i);
                  tmp ++;
              }
          }
          if (tmp > cnt) cout << i << " ";
      }
      cout << endl;
	}
	return 0;
}
