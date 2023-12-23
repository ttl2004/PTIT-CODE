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
	cin >>t;
	while (t--) {
		ll n; 
		cin >> n;
		pair<ll, ll> pa[n + 5];
		for (ll i = 1 ; i <= n; i ++) {
			ll x;
			cin >> x;
			pa[i].first = x;
			pa[i].second = i;
		}
		sort(pa + 1, pa + n + 1, [] (pair<ll, ll> a, pair<ll, ll> b) {
			if(a.first != b.first) return a.first < b.first;
			else return a.second < b.second;
		});
		ll _min = pa[1].second, _max = 0;
		for (ll i = 2; i <= n; i++) {
			if (pa[i].second > _min) {
				_max = max(_max, pa[i].second - _min);
			}
			_min = min(pa[i].second, _min);
		}
		cout << _max << endl;
		
	}

	return 0;
}
