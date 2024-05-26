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
ll tmp[1000006], cnt = 0;
void megre(ll b[],ll l, ll mid, ll r) {
    ll n1 = mid - l + 1;
    ll n2 = r - mid;
    ll left[n1], right[n2];
    for (int i = 0; i < n1; i ++) left[i] = b[l + i];
    for (int i = 0; i < n2; i ++) right[i] = b[mid + 1 + i];
    ll i = 0, j = 0, k = l, idx = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            tmp[k] = left[i];
            i ++;
            idx ++;
        }
        else {
            tmp[k] = right[j];
            j ++;
            cnt += (mid + 1) - idx;
        }
        k ++;
    }
    while (i < n1) {
        tmp[k] = left[i];
        i ++;
        k ++;
    }
    while (j < n2) {
        tmp[k] = right[j];
        j ++;
        k ++;
    }
    for (int i = l; i <= r; i ++) b[i] = tmp[i];
}
void megre_sort(ll b[],ll l, ll r) {
    if (l < r) {
        ll mid = (l + r) / 2;
        megre_sort(b, l, mid);
        megre_sort(b, mid + 1, r);
        megre(b, l, mid, r);
    }
}
__Tieu_Long__PROPTIT__{
    Fast();
    Test() {
        int n, m = 0;
        cin >> n;
        ll a[100006], b[100006];
        for (int i = 0; i < n; i ++) {
            cin >> a[i];
            if (a[i] % 2 == 0) b[m ++] = a[i];
        }
        megre_sort(b, 0, m - 1);
        ll dem = 0, ans = cnt;
        a[n] = 1;
        for (int i = 1; i <= n; i ++) {
            if (a[i] % 2 == 0 && a[i - 1] % 2 == 0) {
                dem ++;
            }
            else if (a[i] % 2 != 0 && a[i - 1] % 2 == 0) {
                cnt = 0;
                megre_sort(a, i - 1 - dem, i - 1);
                ans -= cnt;
                dem = 0;
            }
        }
        cout << ans;
    }
}