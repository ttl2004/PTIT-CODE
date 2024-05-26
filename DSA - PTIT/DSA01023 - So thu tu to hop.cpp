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
void Try(int i, int j, int a[], int arr[], int n, int k, int &cnt) {
	for (int f = j; f <= n - k + i; f ++) {
		a[i] = f;
		if (i == k) {
			cnt++;
			int ok = 1;
			for (int i = 1; i <= k; i ++) {
				if(arr[i] != a[i]) {
					ok = 0;
					break;
				}
			}
			if (ok) {
				cout << cnt << endl;
				return;
			}
		}
		else Try(i + 1, f + 1, a, arr, n, k, cnt);
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n, k;
		cin >> n >> k;
		int arr[n + 5], a[k + 5], cnt = 0;
		for (int i = 1; i <= k; i ++) {
			cin >> arr[i];
			a[i] = i;
		}
		Try(1, 1, a, arr, n , k, cnt);
	}

	return 0;
}
