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
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		ll n;
	    cin >> n;
	    priority_queue<ll, vector<ll>, greater<ll>> kq;
	    for (ll i = 0; i < n; i++) {
	        ll x; 
	        cin >> x;
	        kq.push(x);
	    }
	    ll res = 0;
	    while (!kq.empty()) {
	        ll f = kq.top();
	        kq.pop();
	        if (kq.empty()) break;
	        res += f + kq.top();
	        kq.push(f + kq.top());
	        kq.pop();
	    }
	    cout << res << endl;
	}

	return 0;
}
