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

__Tieu_Long__{
	Fast();
	Tests() {
        int n;
        cin >> n;
        char A[n +5][n + 5];
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < n; j ++) {
                cin >> A[i][j];
            }
        }
        int a, b , c , d, kt[n + 5][n + 5], check = 0;
        cin >> a >> b >> c >> d;
        memset(kt, 0, sizeof(kt));
        queue<pair<pair<int, int>, int>> qe;
        qe.push({{a, b}, 0});
        kt[a][b] = 1;
        while (qe.size()) {
            pair<pair<int, int>, int> tmp = qe.front();
            qe.pop();
            if (tmp.fi.fi == c && tmp.fi.se == d) {
                cout << tmp.se << endl;
                check = 1;
                break;
            }
            int x = tmp.fi.fi;
            int y = tmp.fi.se;
            for (int i = x + 1; i < n; i ++) {
                if (A[i][y] != 'X' && kt[i][y] == 0) {
                    qe.push({{i, y}, tmp.se + 1});
                    kt[i][y] = 1;
                }
                else break;
            }
            for (int i = x - 1; i >= 0; i --) {
                if (A[i][y] != 'X' && kt[i][y] == 0) {
                    qe.push({{i, y}, tmp.se + 1});
                    kt[i][y] = 1;
                }
                else break;
            }
            for (int i = y + 1; i < n; i ++) {
                if (A[x][i] != 'X' && kt[x][i] == 0) {
                    qe.push({{x, i}, tmp.se + 1});
                    kt[x][i] = 1;
                }
                else break;
            }
            for (int i = y - 1; i >= 0; i --) {
                if (A[x][i] != 'X' && kt[x][i] == 0) {
                    qe.push({{x, i}, tmp.se + 1});
                    kt[x][i] = 1;
                }   
                else break;
            }
        }
        if (!check) cout << "-1\n";
	}
	return 0;
}
