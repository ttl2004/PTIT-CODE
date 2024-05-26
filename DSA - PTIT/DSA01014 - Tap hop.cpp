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
ll n, k, s, a[10005], cnt;
void in() {
	ll sum = 0;
    for (ll i = 1; i <= k; i++) {
    	sum += a[i];
	}
	if (sum == s) cnt ++;
}
void sinh(ll i, ll j) {
    for(ll f = j; f <= n - k + i; f ++) {
        a[i] = f;
        if (i == k) in();
        else sinh(i + 1, f + 1);
    }
}
 
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    while (1) {
    	  cnt = 0;
          cin >> n >> k >> s;
          if(n == 0 && k == 0 && s == 0) break;
          sinh(1, 1);
          cout << cnt;
          cout << "\n";
    }
    return 0;
}
