#include <bits/stdc++.h>
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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, l;
        cin >> n >> m >> l;
        int a[n + 5][m + 5];
        int d[n + 5][m + 5];
        for (int i = 1; i <= n; i ++) {
            for (int j = 1; j <= m; j ++) cin >> a[i][j];
        }
     for(int i=0; i<=n ;i++){
            d[i][0] = 0;
        }
        for (int i = 0; i <= m; i++) {
            d[0][i] = 0;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                d[i][j] = d[i-1][j] + d[i][j-1] - d[i-1][j-1] + a[i][j];
            }
        }
        for (int i = 1; i <= n; i ++) {
            if (i + l - 1 > n) continue;
            for (int j = 1; j <= m; j ++) {
                if (j + l - 1 > m) break;
                int x = i - 1 + l;
                int y = j - 1 + l;
                int sum = d[x][y] - d[x][j - 1] - d[i - 1][y] + d[i - 1][j - 1];
                cout << floor(sum / (l * l)) << " ";
            }
            cout << endl;
        }
    }
	return 0;
}