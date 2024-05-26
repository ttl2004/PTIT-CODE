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

int Find(int in[], int n,  int x) {
    for (int i = 0; i < n; i ++) {
        if (in[i] == x) return i;
    }
    return -1;
}
void pos(int in[], int pre[], int n) {
    int root = Find(in, n, pre[0]);
    // Tìm cây con bên trái
    if (root != 0) pos(in, pre + 1, root);
    // Tìm cáy con bên phải
    if (root != n - 1) pos(in + root + 1, pre + root + 1, n - root  - 1);
    cout << pre[0] << " ";
}
__Tieu_Long__{
    Fast();
    Tests() {
        int n;
        cin >> n;
        int in[n], pre[n];
        for (int i = 0; i < n; i ++) cin >> in[i];
        for (int i = 0; i < n; i ++) cin >> pre[i];
        pos(in, pre, n);
        cout << endl;
    }
    return 0;
}
