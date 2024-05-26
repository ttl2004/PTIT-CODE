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
		int n;
		cin >> n;
		int a[n + 5], left[n + 5], right[n + 5];
		for (int i = 0; i < n; i ++) {
			cin >> a[i];
		}
		left[0] = 1;
		for (int i = 1; i < n; i ++) {
			if (a[i] > a[i - 1]) left[i] = left[i - 1] + 1;
			else left[i] = 1;
		}
		right[n - 1] = 1;
		for (int i = n - 2; i >= 0; i --) {
			if (a[i] > a[i + 1]) right[i] = right[i + 1] + 1;
			else right[i] = 1;
		}
		int _max = 0;
		for (int i = 0; i < n; i ++) {
			_max = max(_max, right[i] + left[i] - 1);
		}
		cout << _max << endl;
 	}
	return 0;
}
