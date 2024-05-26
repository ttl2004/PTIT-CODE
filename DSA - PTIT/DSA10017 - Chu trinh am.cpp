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
struct tt{
    int u, v, w;
};
__Tieu_Long__{
    Fast();
    Tests() {
        cin >> n >> m;
        vector<tt> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i].u >> a[i].v >> a[i].w;
        }
        // sử dụng thuật toán Bellman-Ford (mỗi đỉnh chỉ cập nhập đường đi ngắn nhất tới nó đúng n - 1 lần, còn lớn hơn n - 1 lần là có chu trình âm)
        int check = 1; // bằng 1 là ko có chu trình âm, bằng 0 ngược lại
        vector<int> dist(1005, INF); 
        dist[1] = 0; // lấy 1 đỉnh làm đỉnh nguồn và gán đường đi tới chính nó là 0(lấy đỉnh nào cũng dc điều kiện <= n và  != 0)
        for (int i = 1; i <= n; i ++) {
            for (int j = 0; j < m; j ++) {
                if (dist[a[j].v] > dist[a[j].u] + a[j].w) {
                    dist[a[j].v] = dist[a[j].u] + a[j].w;
                    if (i == n) {
                        check = 0;
                        break;
                    }
                }
            }
            if (check == 0) break;
        }
        if (check == 1) cout << "0\n"; 
        else cout << "1\n";
	}
}