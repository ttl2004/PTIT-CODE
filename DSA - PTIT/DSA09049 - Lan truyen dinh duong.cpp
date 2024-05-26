#include <bits/stdc++.h>
#define __Tieu_Long__PROPTIT__ int main()
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
    - Các đỉnh đều có giá trị ban đầu là 1
    - khi đỉnh cha nhận dc dinh dưỡng từ đỉnh con thì giá trị của đỉnh cha = giá trị đỉnh con + giá trị hiện tại của đỉnh cha, sau đó gtri của
    đỉnh cha  += số đỉnh con, cháu của nó
    + ví dụ ở test:
    5
    1 2 2 4
    thì số đỉnh con cháu của đỉnh 2 là 3 => đỉnh 3, 4, 5.
                            đỉnh 1 là 4 => đỉnh 2, 3, 4 ,5.
*/
vector<int> adj[200005];
vector<ll> child(200005, 0), ans(200005, 1);
void dfs(int u) {
    for (auto v : adj[u]) {
        dfs(v);
        ans[u] += ans[v];
        child[u] += child[v];
    }
    ans[u] += child[u];

}
__Tieu_Long__PROPTIT__{
    Fast();
    Test() {
        int n;
        cin >> n;
        for (int i = 2; i <= n; i ++) {
            int x;
            cin >> x;
            adj[x].pb(i);
            child[x] ++;
        }
        dfs(1);
        for (int i = 1; i <= n; i ++) {
            cout << ans[i] << " ";
        }
    }
}