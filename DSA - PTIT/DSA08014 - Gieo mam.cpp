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
void solve() {
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            cin >> a[i][j];
        }
    }
    int kt[n + 1][m + 1];
    int cnt = 0;
    while (true) {
        bool ok = false;
        memset(kt, 0 , sizeof(kt));
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j ++) {
                if (!kt[i][j]) {
                    if (a[i][j] == 2) {
                        if (i > 0 && a[i - 1][j] == 1) {
                            a[i - 1][j] = 2;
                            kt[i - 1][j] = 1;
                            ok = true;
                        }
                        if (j > 0 && a[i][j - 1] == 1) {
                            a[i][j - 1] = 2;
                            kt[i][j - 1] = 1;
                            ok = true;
                        }
                        if (i < n - 1 && a[i + 1][j] == 1) {
                            a[i + 1][j] = 2;
                            kt[i + 1][j] = 1;
                            ok = true;
                        }
                        if (j < m - 1 && a[i][j + 1] == 1) {
                            a[i][j + 1] = 2;
                            kt[i][j + 1] = 1;
                            ok = true;
                        }
                    }
                }
            }
        }
        if (!ok) break;
        cnt ++;
    }
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            if(a[i][j] == 1) {
              cout << "-1\n";
              return;  
            }
        }
    }
    cout << cnt << endl;    
}
__Tieu_Long__{
	Fast();
	Tests() {
        solve();
	}
	return 0;
}
