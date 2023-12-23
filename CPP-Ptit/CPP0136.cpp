#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
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
ll check(ll n) {
    if (n < 2) return 0;
    for (ll i = 2; i*i <= n; i++) if (n % i == 0 ) return 0;
    return 1;
}
ll cp(ll n) {
    ll a = sqrt(n);
    return (a*a == n);
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll cnt = 0;
        for (ll i = 1; i*i <= n; i++) {
            if (check(i) && i*i <= n) {
                //cout << i*i << " ";
                cnt ++;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}