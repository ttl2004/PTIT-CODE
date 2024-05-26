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
vector<int> adj[1005];
bool kt[1005];
int parent[1005], st, en, ok = 0;
bool DFS(int i) {
   kt[i] = true;
   for (int j : adj[i]) {
      if (!kt[j]) {
          parent[j] = i;
          if (DFS(j)) return true;
      }
      else if (j != parent[i] && j == 1) {
          st = j;
          en = i;
          return true; // t?n t?i c?nh ngu?c 
      }
   }
   return false;
}
__Tieu_Long__{
	Fast();
	Tests() {
      int v, e;
      cin >> v >> e;
      for (int i = 0; i < e; i++) {
         int x, y;
         cin >> x >> y;
         adj[x].push_back(y);
         adj[y].push_back(x);
      }
      for (int i = 1; i <= v; i ++) sort(adj[i].begin(), adj[i].end());
      stack<int> ans;
      if (DFS(1) && st == 1) {   
          ok = 1;;
          while (en != st) {
              ans.push(en);
              en = parent[en];
          }
         
      }
      if (ok) {
        cout << 1 << " ";
        while (ans.size()) {
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << 1;
      }
      else cout << "NO";
      cout << endl;
      for (int i = 1; i <= v; i++) adj[i].clear();
      memset(kt, false, sizeof(kt));
      ok = 0;
	}
	return 0;
}
