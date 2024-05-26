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

map<int, int> mp;
void pos(int in[], int level[], int n, int l, int r) {
    if (l > r) return;
    else if (l == r) cout << in[l] << " ";
    else {
        int idx;
        // tìm số đầu tiên trong mảng level có vị trí nằm trong đoạn l, r ở mảng in[]
        for (int i = 0; i < n; i ++) {
            if (mp[level[i]] >= l && mp[level[i]] <= r) {
                idx = mp[level[i]];
                break;
            }
        }
        pos(in, level, n, l, idx - 1);
        pos(in, level, n, idx + 1, r);
        cout << in[idx] << " ";
    }
}
__Tieu_Long__{
    Fast();
    Tests() {
        int n;
        cin >> n;
        int in[n], level[n];
        for (int i = 0; i < n; i ++) cin >> in[i], mp[in[i]] = i;
        for (int i = 0; i < n; i ++) cin >> level[i];
        pos(in, level, n, 0, n - 1);
        cout << endl;
    }
    return 0;
}
