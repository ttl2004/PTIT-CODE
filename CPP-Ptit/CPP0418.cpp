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
		ll n, m;
		cin >> n >> m;
		ll a[n + 5], b[n + 5];
		set<ll> s;
		map<ll, ll> ct1, ct2;
		for (int i = 0; i <n; i++){
			cin >>a[i];
			s.insert(a[i]);
			ct1[a[i]] ++;
		}
		for (int i = 0; i< m; i++) {
			cin >> b[i];
			s.insert(b[i]);
			ct2[b[i]] ++;
		}
		vector<ll> c(s.begin(), s.end());
		int len = c.size();
		for (int i = 0; i < len; i ++) {
			cout << c[i] << " ";
		}
		cout << endl;
		
		for (int i = 0; i < n; i++) {
			if (ct1[a[i]] >0 && ct2[a[i]] > 0) {
				cout <<a[i] << " ";
			}
		}
		cout <<endl;
	}

	return 0;
}
