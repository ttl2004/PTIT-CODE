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
		int n, k;
		cin >> n >> k;
		int a[k + 5];
		for (int i = 1; i <= k; i ++) cin >> a[i];
		int idx = k;
		while (idx > 0 && a[idx] == n - k + idx) idx --;
		if (idx <= 0) {
			for (int i = 1; i <= k; i ++) cout << i << " ";
			cout << endl;
		}
		else {
			a[idx] ++;
			for (int j = idx + 1; j <= k; j ++) {
				a[j] = a[j - 1] + 1;
			}
			for (int i = 1; i <= k; i ++) cout << a[i] << " ";
			cout << endl;
		}
	}

	return 0;
}
