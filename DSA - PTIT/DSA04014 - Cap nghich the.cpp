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
ll a[1000006], cnt = 0;
void megre(ll l, ll mid, ll r) {
    ll n1 = mid - l + 1;
    ll n2 = r - mid;
    ll left[n1], right[n2];
    for (int i = 0; i < n1; i ++) left[i] = a[l + i];
    for (int i = 0; i < n2; i ++) right[i] = a[mid + 1 + i];
    ll i = 0, j = 0, k = l, idx = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k] = left[i];
            i ++;
            idx ++;
        }
        else {
            a[k] = right[j];
            j ++;
            cnt += (mid + 1) - idx;
        }
        k ++;
    }
    while (i < n1) {
        a[k] = left[i];
        i ++;
        k ++;
    }
    while (j < n2) {
        a[k] = right[j];
        j ++;
        k ++;
    }
}
void megre_sort(ll l, ll r) {
    if (l < r) {
        ll mid = (l + r) / 2;
        megre_sort(l, mid);
        megre_sort(mid + 1, r);
        megre(l, mid, r);
    }
}
__Tieu_Long__PROPTIT__{
    Fast();
    Tests() {
        int n;
        cin >> n;
        for (int i = 0; i < n; i ++) cin >> a[i];
        megre_sort(0, n - 1);
        cout << cnt << endl;
        cnt = 0;
        memset(a, 0, sizeof(a));
    }
}