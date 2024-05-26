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
const int INF = 1e9;
int n, m;
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> n >> m;
        // Dùng thuật toán FLOYD với trọng số của các cạnh là 1 để tìm đường đi ngắn nhất giữa 2 đỉnh
        vector<vector<int>> ans(n + 1, vector<int> (n + 1, INF));
        for (int i = 0; i < m; i ++){
            int x, y;
            cin >> x >> y;
            ans[x][y] = 1;
        }
        for (int k = 1; k <= n; k ++){
            ans[k][k] = 0;
            for (int i = 1; i <= n; i ++){
                for (int j = 1; j <= n; j ++){
                    ans[i][j] = min(ans[i][j], ans[i][k] + ans[k][j]);
                }
            }
        }
        int cnt = 0, sum = 0;
        for (int i = 1; i <= n; i ++){
            for (int j = 1; j <= n; j ++){
                if (ans[i][j] != 0 && ans[i][j] != INF) {
                    cnt ++;
                    sum += ans[i][j];
                }
            }
        }
        double res = (double) sum / cnt;
        cout << fixed << setprecision(2) << res << endl;
	}
}