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

/*
0 : là màu trắng -> đỉnh chưa thăm
1: là màu xám -> đỉnh chưa thăm hết
2: là màu đen -> đỉnh đã thăm hết
*/
vector<int> adj[1005];
int parent[1005], kt[1005], v, e;
bool DFS(int x) {
   kt[x] = 1;
   for (auto y : adj[x]) {
      if (!kt[y]) {
          parent[y] = x; 
          if (DFS(y)) return true;
      }
      else if (y != parent[x]) return true;
   }
   return false;
} 
__Tieu_Long__{
	Fast();
	Tests() {
      cin >> v >> e;
      for (int i = 0; i < e; i++) {
         int x, y;
         cin >> x >> y;
         adj[x].pb(y);
         adj[y].pb(x);
      }
      int ok = 0;
      for (int i = 1; i <= v; i++) {
         if (kt[i] == 0) {
            ok = DFS(i);
            if (ok == 1) break;
         }
      }
      if (ok == 1) cout << "YES\n";
      else cout << "NO\n";
      for (int i = 1; i <= v; i++) adj[i].clear();
      memset(kt, 0, sizeof(kt));
      memset(parent, 0, sizeof(parent));
	}
	return 0;
}
