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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
const ll MOD = 1000000007;
 
void tich(ll a[2][2], ll b[2][2]) {
    ll c[2][2];
    c[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0]) % MOD;
    c[0][1] = (a[0][0] * b[0][1] + a[0][1] * b[1][1]) % MOD;
    c[1][0] = (a[1][0] * b[0][0] + a[1][1] * b[1][0]) % MOD;
    c[1][1] = (a[1][0] * b[0][1] + a[1][1] * b[1][1]) % MOD;
    a[0][0] = c[0][0]; a[0][1] = c[0][1];
    a[1][0] = c[1][0]; a[1][1] = c[1][1];
}
 
void p(ll a[2][2], ll n) {
    if (n == 1) {
        return;
    }
    p(a, n / 2);
    tich(a, a);
    if(n % 2 != 0) {
        ll b[2][2] = {{1, 1}, {1, 0}};
        tich(a, b);
    }
}
 
ll fibonacci(ll k) {
    if (k <= 1) {
        return k;
    }
    ll a[2][2] = {{1, 1}, {1, 0}};
    p(a, k - 1);
    return a[0][0];
}
int main() {
    int t;
    cin >> t;
    while(t--){
          ll k;
          cin >> k;
          ll res = fibonacci(k);
          cout << res << endl;
    }
    return 0;
}
