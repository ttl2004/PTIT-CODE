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
ll pow(ll a, ll b , ll m) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res*a) % m;
        }
        a = (a * a) % m;
        b /= 2;
    }
    return res;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string a;
        ll b, m;
        cin >> a >> b >> m;
        ll c = 0;
        for (auto x : a) {
            c = c*10 + (x - '0');
            c%=m;
        }
        cout << pow(c, b ,m) <<endl;;
    }
	return 0;
}