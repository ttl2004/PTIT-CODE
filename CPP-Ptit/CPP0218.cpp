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
	while (t--) {
		ll n;
		cin >> n;
		if (n == 0) continue;
		ll a[n + 5], _max = -1e12;
		map<int,int> mp;
		for (int i = 0; i < n; i ++){
			cin >> a[i];
			mp[a[i]]++;
			_max = max(_max, a[i]);
		}
		if (mp.size() == 1) {
			cout << 0 << endl;
			continue;
		}
		ll cnt = 0;
		for (int i = 1; i <= _max; i++){
			bool kt = true;
			ll f = a[0] % i;
			for (int j = 1; j < n; j ++){
				if(a[j] % i != f){
					kt = false;
					break;
				}
			}
			if (kt) cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
