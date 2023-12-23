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

ll n, k, a[30];
void in() {
    for(ll i=1; i<=k; i++) cout<<a[i];
    cout<<" ";
}
void sinh(ll i, ll j) {
    for(ll f=j; f<=n-k+i; f++) {
        a[i] = f;
        if (i == k) in();
        else sinh(i + 1, f + 1);
    }
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
          cin >> n >> k;
          sinh(1, 1);
          cout<<endl;
    }
    return 0;
}