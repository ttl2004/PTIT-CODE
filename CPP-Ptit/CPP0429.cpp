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
	int n, k, b;
	cin >> n >> k >> b;
	int kt[n  + 5] = {0};
	for (int i = 0; i < b; i ++) {
		int x;
		cin >> x;
		kt[x] = 1;
	}
	int res = 1e9;
	queue<int> qe;
	for (int  i = 1; i <= n; i++) {
		if (kt[i] == 1) qe.push(i);
		if (qe.size() > 0 && qe.front() + k - 1 < i) qe.pop();
		if (i >= k) {
			res = min(res, (int)qe.size());
		}
	}
	cout << res;

	return 0;
}
