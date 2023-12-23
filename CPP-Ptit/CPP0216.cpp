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
ll check(int n, vector<int> b) {
	for (int i = 1; i < n/2; i++) {
		if(b[i] < b[i - 1]) return 0;
	}
	return 1;
}
ll check1(int n, vector<int> b) {
	for (int i = n/2 + 1; i < n; i++) {
		if(b[i] > b[i - 1]) return 0;
	}
	return 1;
}
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, l, r;
		cin >> n;
		vector<int> a(n + 5);
		for (int i = 0; i < n ; i++) {
			cin >> a[i];
		}
		cin >> l >> r;
		vector<int> b;
		for (int i = l; i <= r; i++) b.pb(a[i]);
		int len = b.size();
		if (check(len, b) and check1(len, b)) cout << "Yes\n";
		else cout << "No\n";
		
	}
	return 0;
}

