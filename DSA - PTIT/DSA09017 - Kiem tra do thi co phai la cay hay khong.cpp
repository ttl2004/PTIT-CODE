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
void DFS(int i) {
    kt[i] = 1;
    for (auto x : adj[i]) {
        if (!kt[x]) {
            DFS(x);
        }
    }
}
void xuly(int n) {
    DFS(1);
        for (int i = 1; i <= n; i ++) {
            if (!kt[i]) {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
}
__Tieu_Long__{
	Fast();
	Tests() {
        int n;
        cin >> n;
        for (int i = 1; i <= n - 1; i ++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        xuly(n);
        for (int i = 1; i <= n; i ++) {
            adj[i].clear();
            kt[i] = 0;
        }
	}
	return 0;
}
