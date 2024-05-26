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
char toan_tu[3] = {'+', '-', '*'};
int toan_hang[5];
int tinh_toan(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    return 0;
}

bool check(vector<char> op) {
    int res = toan_hang[0];
    for (int i = 0; i < 4; i ++) {
        res = tinh_toan(res, toan_hang[i + 1], op[i]);
    }
    return res == 23;
}
bool solve() {
    vector<char> op(4);
    do {
        for (int i = 0; i < 3; i ++) {
            op[0] = toan_tu[i];
            for (int j = 0; j < 3; j ++) {
                op[1] = toan_tu[j];
                for (int k = 0; k < 3; k ++) {
                    op[2] = toan_tu[k];
                    for (int l = 0; l < 3; l ++) {
                        op[3] = toan_tu[l];
                        if (check(op)) {
                            return true;
                        }
                    }
                }
            }
        }
    }while (next_permutation(toan_hang, toan_hang + 5));
    return false;
}
__Tieu_Long__PROPTIT__{
    Fast();
    Tests() {
        for (int i = 0; i < 5; i ++) {
            cin >> toan_hang[i];
        }
        sort(toan_hang, toan_hang + 5);
        cout << (solve() ? "YES" : "NO") << endl;
    }
}