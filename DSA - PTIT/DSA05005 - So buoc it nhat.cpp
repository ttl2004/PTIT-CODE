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
void sort(int a[], int n, int &cnt) {
	for (int i = 0; i < n; i ++) {
		int idx_min = i;
		for (int j = i + 1; j < n; j ++) {
			if (a[idx_min] > a[j]) {
				idx_min = j;
			}
		}
		if (idx_min != i) {
			swap(a[i], a[idx_min]);
			cnt++;
		}
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int n, cnt = 0;
		cin >> n;
		int a[n + 5];
		for (int i = 0; i < n; i ++) cin >> a[i];
		sort(a, n, cnt);
		cout << cnt << endl;
	}

	return 0;
}
