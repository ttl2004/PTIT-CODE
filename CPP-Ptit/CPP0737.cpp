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
	cin  >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n  + 5];
		queue<pair<int, int>> qe;
		int max = -1e12;
		int sum = 0, l, r;
		for (int i = 1; i <= n; i ++) {
			cin >> a[i];
			qe.push({a[i], i});
			sum += a[i];
			if (qe.size() % k == 0) {
				int f = sum;
				if (max < f) {
					max = f;
					l = qe.front().second;
					r = i;
				}
				sum -= qe.front().first;
				qe.pop();
			}
		}
		for (int i = l; i <= r; i ++) cout << a[i] << " ";
		cout << endl;
		
	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}