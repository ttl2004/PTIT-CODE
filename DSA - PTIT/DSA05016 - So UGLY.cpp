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
//

vector<ll> kq;
void sang() {
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	map<ll, ll> mp;
	ll ans;
	pq.push(1);
	mp[1] ++;
	for (int i = 1; i <= 1e4 + 1; i ++) {
		ans = pq.top();
		kq.pb(ans);
		pq.pop();
		if (mp[ans * 2] == 0) pq.push(ans * 2), mp[ans * 2] ++;
		if (mp[ans * 3] == 0) pq.push(ans * 3), mp[ans * 3] ++;
		if (mp[ans * 5] == 0) pq.push(ans * 5), mp[ans * 5] ++;
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	sang();
	int t;
	cin >> t;
	while (t --) {
		ll n;
		cin >> n;
		cout << kq[n - 1] << endl;
	}
	return 0;
}
