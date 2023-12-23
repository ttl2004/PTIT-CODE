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
		int n, k;
		cin >> n >> k;
		pair<pair<int,int>, int> pa[n + 5];
		for (int i = 0; i < n; i++) {
			cin >> pa[i].first.first;
			pa[i].first.second = abs(pa[i].first.first - k);
			pa[i].second = i;
		}
		sort(pa, pa + n, [](pair<pair<int,int>, int> a, pair<pair<int,int>, int> b){
			if(a.first.second != b.first.second)
				return a.first.second < b.first.second;
			else 
				return a.second < b.second;
		});
		for (int i = 0; i < n ; i++) {
			cout << pa[i].first.first << " ";
		}
		cout << endl;
	}

	return 0;
}
