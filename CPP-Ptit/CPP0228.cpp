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
//	ios_base :: sync_with_stdio (0);
//	cin.tie(0);
//	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		n *= 4;
		int a[n + 5][n + 5];
		int f = 1;
		for (int i = 1; i <= n; i ++) {
			for (int j = 1; j <= n; j ++) {
				a[i][j] = f++;
			}
		}
		vector<int> arr, brr;
		int cnt = 1, count = 1, j = 2, y = 2;
		while (cnt <= (n * n) /2 ) {
			//cuon 2
			int J = (cnt == 1) ? 1 : j - 2;
			for (int k = J; k <= n - j + 2; k ++) {
				//cout << a[k][j - 1] << " ";
				arr.pb(a[k][j - 1]);
				cnt ++;
			} 
			for (int k = j; k <= n - j + 1; k++) {
				//cout << a[n - j  + 2][k] << " ";
				arr.pb(a[n - j + 2][k]);
				cnt++;
			}
			for (int k = n - j + 1; k >= j; k --) {
				//cout << a[k][n - j + 1] << " ";
				arr.pb(a[k][n - j + 1]);
				cnt++;
			}
			for (int k = n - j; k >= j + 2; k --) {
				//cout << a[j][k] << " ";
				arr.pb(a[j][k]);
				cnt ++;
			}
			j += 2;
			
		}
		while (count <= (n * n) / 2) {
			//cuon 1
			int I = (count == 1) ? n : ( n - y + 3);
			for (int f = I; f >=  y - 1; f --) {
				//cout << a[f][n - y + 2] << " ";
				brr.pb(a[f][n - y + 2]);
				count++; 
			}
			for (int f = n - y + 1; f >= y + 1; f --) {
				//cout << a[y - 1][f] << " ";
				brr.pb(a[y - 1][f]);
				count++;
			}
			for (int f = y - 1; f <= n - y; f ++) {
				//cout << a[f][y] << " ";
				brr.pb(a[f][y]);
				count++;
			}
			int Y = (count == ((n * n) / 2)) ? y : (n - y - 1);
			for (int f = y; f <= Y; f ++) {
				//cout << a[n - y + 1][f] << " ";
				brr.pb(a[n - y + 1][f]);
				count++;
			}
			y += 2;
		}
		for (int ij = brr.size() - 1; ij >= 0; ij --) cout << brr[ij] << " ";
		cout << endl;
		for (int ij = arr.size() - 1; ij >= 0; ij --) cout << arr[ij] << " ";
		cout << endl;
		//cout << arr.size() << " - " << brr.size() << endl;
	}

	return 0;
}
