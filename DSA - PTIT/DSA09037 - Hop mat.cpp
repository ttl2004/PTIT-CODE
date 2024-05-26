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
int n, m, k;
vector<int> adj[1005];
bool check[1005];
void dfs(int u) {
    check[u] = true;
    for (int v : adj[u]) {
        if (!check[v]) {
            dfs(v);
        }
    }
}
__Tieu_Long__{
    Fast();
    Test() {
        cin >> k >> n >> m;
        int nguoi[k + 1]; //lưu vị trí người đang đứng
        for (int i = 1; i <= k; i++) {
            cin >> nguoi[i];
        }
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }
        /*
           - Một nút là điểm họp mặt hợp lệ nếu tất cả K người đều có thể đến nút đó. Điều này có nghĩa là giá trị đếm trong mảng phải bằng K.
        */
        int cnt[n + 1] = {};
        for (int i = 1; i <= k; i++) {
            memset(check, false, sizeof(check));
            dfs(nguoi[i]);
            for (int j = 1; j <= n; j ++) {
                if (check[j]) {
                    cnt[j] ++;
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i ++) {
            if (cnt[i] == k) {
                ans ++;
            }
        }        
        cout << ans << endl;
	}
}