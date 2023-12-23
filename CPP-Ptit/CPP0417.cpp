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
		cin >> n;
		pair<ll, ll> pa[n + 5];
		for (int i = 0; i < n; i ++) {
			cin >> pa[i].first;
			pa[i].second = i;
		}
		sort(pa, pa + n, [](pair<ll, ll> a, pair<ll, ll> b){
			if (a.first != b.first) return a.first < b.first;
			else return a.second < b.second;
		});
		ll idx1 = n - 1, idx2 = 0;
		for (int i = 0; i < n; i ++) {
			if (pa[i].second != i){
				idx1 = min(pa[i].second, idx1);
				idx2 = max(pa[i].second, idx2);
			}
		}
		cout << idx1+1 <<" "<< idx2+1 <<endl;
	}

	return 0;
}
