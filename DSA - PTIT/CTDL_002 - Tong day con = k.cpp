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
int cnt = 0;
void Try(string s, string x, string y, int n, int k, int a[]) {
	if (s.size() == n){
		int sum = 0;
		for (int i = 0; i < n; i ++) {
			sum += a[i] * (s[i] - '0');
		}
		if (sum == k) {
			cnt ++;
			for (int i = 0; i < n; i ++) {
				if (s[i] == '1') cout << a[i] << " ";
			}
			cout << endl;
		}
		return;
	}
	Try(s + x, x, y, n, k, a);
	Try(s + y, x, y, n, k, a);
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	while (t --) {
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		for (int i = 0; i < n; i ++) cin >> a[i];
		Try("", "0", "1", n, k, a);
		cout << cnt;
	}

	return 0;
}
