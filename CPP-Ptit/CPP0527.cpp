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
	int n;
	cin >> n;
	pair<pair<int, int>, int> pa[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> pa[i].second >> pa[i].first.second >> pa[i].first.first;
	}
	sort(pa, pa + n, [] (pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
		if (a.second != b.second) return a.second < b.second;
		else if (a.first.second != b.first.second) return a.first.second < b.first.second;
		else return a.first.first < b.first.first;
	});
	for (int i = 0; i < n ; i++) cout << pa[i].second << " " << pa[i].first.second << " " << pa[i].first.first << endl;
	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
