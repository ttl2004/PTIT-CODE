#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
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
ll fb[100] = {};
char check(ll n, ll k) {
	if (n == 1) return 'A';
	if (n == 2) return 'B';
	if (k <=  fb[n - 2]) return check(n - 2, k); 
	else return check(n - 1, k - fb[n - 2]);
}
__Tieu_Long__{
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	fb[1] = 1;
	fb[2] = 1;
	for (int i = 3; i <= 99; i ++) fb[i] = fb[i - 2] + fb[i - 1];
	int t;
	cin >> t;
	while (t --) {
		ll n, k;
		cin >> n >> k;
		cout << check(n, k) << endl;
	}
	return 0;
}
