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
		int m ,n;
		cin >> m >> n;
		int a[m + 5], b[n + 5];
		for (int i = 0; i < m; i ++) cin >> a[i];
		for (int i = 0; i < n; i ++) cin >> b[i];
		int c[m + n] = {};
		for (int  i = 0 ; i < m; i ++) {
			int j = 0;
			for (j = 0; j < n; j ++) {
				int temp = a[i] * b[j] + c[i + j];
				c[i + j] = temp;
			}
		}
		for (int i = 0; i < m + n - 1; i ++) cout << c[i] << " ";
		cout << endl;
	}
	return 0;
}
