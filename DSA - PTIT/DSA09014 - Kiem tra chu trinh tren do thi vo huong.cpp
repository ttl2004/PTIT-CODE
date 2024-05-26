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
bool DFS(int i, int par) {
   kt[i] = true;
   for (int j : adj[i]) {
      if (!kt[j]) {
         if (DFS(j, i)) return true;
      }
      else if (j != par) return true; // t?n t?i c?nh ngu?c 
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
      int ok = 0;
      for (int i = 1; i <= v; i++) {
         if (!kt[i]) {
            memset(kt, false, sizeof(kt));
            if (DFS(i, 0)) {   
               ok = 1;  
               break;
            }
         }
      }
      if (ok) cout << "YES\n";
      else cout << "NO\n";
      for (int i = 1; i <= v; i++) adj[i].clear();
      memset(kt, false, sizeof(kt));

	}
	return 0;
}
