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
int check(int a[], int k) {
	for (int i = 2; i <= k; i ++) {
		if (abs(a[i] - a[i -1 ]) == 1) return 0;
	}
	return 1;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int k;
		cin >> k;
		int a[k + 5];
		for (int i = 1; i <= k; i++) a[i] = i;
		do{
			if (check(a, k)) {
				for (int i = 1; i <= k; i ++) cout << a[i];
				cout << endl;
			}
		}while (next_permutation(a + 1, a + 1 + k));
	}

	return 0;
}
