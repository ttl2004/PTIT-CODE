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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	 int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll a[n+5], maxT=-1e18, s;
        for(ll i=0; i<n; i++){
        	cin>>a[i];
		}
		for(ll i = 0; i < n; ++i) {
	        s = 1;
	        for(ll j = i; j < n; ++j) {
	            s *= a[j];
	            maxT = max(maxT, s);
	        }
	    }
		cout<<maxT;
		cout<<endl;
	}
	return 0;
}
