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
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
using namespace std;

ll pow(ll a, ll b, ll MOD) {
    int res = 1;
    while (b) {
        if (b & 1) res = (res * 1ll * a) % MOD;
        a = (a * 1ll * a) % MOD;
        b >>= 1;
    }
    return res;
}
int main(){
    //deo huy chuong
    //khong truot phat nao
    ll t;
    cin>>t;
    while(t--){
        string a;
        ll b, m;
        cin>>a>>b>>m;
        ll k = 0;
        for(ll i=0; i<a.length();i++){
            k = k*10 + (a[i] - '0');
            k %= m;
        }
        ll ans = pow(k,b,m);
        cout << ans << endl;
        
    }
    return 0;
} 