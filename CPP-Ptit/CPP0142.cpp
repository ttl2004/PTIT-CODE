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
int check(int n) {
	if (n < 2) return 0;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) return 0;
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
		int x;
		cin >> x;
		int cnt = 0;
		for (int i = 1; i <= x; i++) {
			if (__gcd(i, x) == 1) cnt++;
		}
		if (check(cnt)) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}

