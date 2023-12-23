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
		int n, _max = 0;
		cin >> n; 
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			int  x;
			cin >> x;
			_max = max(_max, x);
			mp[x]++;
		}
		pair<int, int> a[n + 5];
		int k = 0;
		for (int i = 0; i <= _max; i++) {
			if (mp[i] > 0) {
				a[k].first = i;
				a[k].second = mp[i];
				k++;
			}
		}
		sort(a, a + k, [] (pair<int, int> x, pair<int, int> y) {
			if (x.second != y.second) return x.second > y.second;
			else {
				return x.first < y.first;
			}
		});
		for (int i = 0; i < k ; i++) {
			for (int j = 0; j < a[i].second; j++) {
				cout << a[i].first << " ";
			}
		}
		cout << endl;

	}

	return 0;
}
