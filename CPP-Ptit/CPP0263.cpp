#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
//f[x][y]= a[x][y] + f[x][y-1] + f[x-1][y] – f[x-1][y-1]
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
//Thuật toán Kadane 2 chiều
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1 ;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n + 5][n + 5];
        ll tr[400 + 5];
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
     
        ll res = -1000000007;
        for (int i = 1; i <= n; i++){
            memset(tr, 0, sizeof(tr));
            for (int u = i; u <= n; u++){
                ll sum = 0;
                ll best = -1000000007;
                for (int j = 1; j <= n; j++){
                    tr[j] += a[u][j];
                    sum = max(tr[j], sum + tr[j]);
                    best = max(best, sum);
                }
                res = max(best, res);
            }
        }
     
        cout << res;
    }
}