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
int search(int a[], int l ,int r, int x) {
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == x) {
			return mid;
		}
		else if (a[mid] > x) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n, x;
		cin >> n >> x;
		int a[n + 5];
		for (int i = 0; i < n; i ++) cin >> a[i];
		int idx = search(a, 0, n - 1, x);
		if (idx != -1) cout << idx + 1 << endl;
		else cout << "NO\n";
	}

	return 0;
}
