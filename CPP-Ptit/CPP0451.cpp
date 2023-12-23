#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define F for
#define W while
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
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0 ; i < n; i ++) {
			cin >> a[i];
		}
		int k, x; cin >> k >> x;
		int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
		int index = idx;
		if (a[idx] == x) {
			idx ++;
			index = idx - 2;
		}
		else index = idx - 1;
		for (int i = index - k/2 + 1; i <= index; i++) cout << a[i] << " ";
		for (int  i = idx; i < idx + k/2; i++) cout << a[i] << " ";
		cout << endl;
 	}

	return 0;
}
//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}