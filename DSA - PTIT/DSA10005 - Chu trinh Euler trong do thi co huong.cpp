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
int V, E, deg[1005];
__Tieu_Long__{
    Fast();
    Tests() {
        memset(deg, 0, sizeof(deg));
        cin >> V >> E;
        for (int i = 0; i < E; i ++) {
            int x, y;
            cin >> x >> y;
            deg[x] ++;
            deg[y] --;
        }
        int ok = 1;
        for (int i = 1; i <= V; i ++) {
            if (deg[i] != 0) {
                ok = 0;
                break;
            }
        }
        if (ok) cout << "1\n";
        else cout << "0\n";
    }       
    return 0;
}
