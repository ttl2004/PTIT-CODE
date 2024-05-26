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
int v, e, Begin, End;
int check[2005];
vector<int> adj[2005];

void DFS(int i) {
    check[i] = 1;
    for (auto x : adj[i]) {
        if (!check[x]) {
            DFS(x);
        }
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> v >> e;
        for (int i = 1; i <= e; i ++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        int ok = 1;
        for (int i = 1; i <= v; i ++) {
            memset(check, 0, sizeof(check));
            DFS(i);
            for (int j = 1; j <= v; j ++) {
                if (!check[j]) {
                    ok = 0;
                    break;
                }
            }
            if (!ok) break;
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
        for (int i = 1; i <= v; i ++) adj[i].clear();
        memset(check, 0, sizeof(check));
	  }
	return 0;
}