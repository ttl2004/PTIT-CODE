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
int Ban_Bac_Vao[1005], v, e;
bool Kahn() {
    queue<int> qe;
    for (int i = 1; i <= v; i++) {
        if (Ban_Bac_Vao[i] == 0) qe.push(i);
    }
    int cnt = 0;
    while (!qe.empty()) {
        int tmp = qe.front();
        qe.pop();
        cnt++;
        for (auto x : adj[tmp]) {
            Ban_Bac_Vao[x]--;
            if (Ban_Bac_Vao[x] == 0) qe.push(x);
        }
    }
    return cnt == v;
}

__Tieu_Long__{
	Fast();
	Tests() {
      cin >> v >> e;
      for (int i = 0; i < e; i++) {
         int x, y;
         cin >> x >> y;
         adj[x].pb(y);
         Ban_Bac_Vao[y] ++;
      }
      if (!Kahn()) cout << "YES\n";
      else cout << "NO\n";
      for (int i = 1; i <= v; i++) adj[i].clear();
      memset(Ban_Bac_Vao, 0, sizeof(Ban_Bac_Vao));
	}
	return 0;
}
