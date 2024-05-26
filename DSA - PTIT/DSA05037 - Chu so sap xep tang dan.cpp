#include <bits/stdc++.h>
#define __Tieu_Long__ int main()
#define Fast(); ios_base :: sync_with_stdio (0); cin.tie(0); cout.tie(0);
#define Tests() int t; cin >> t; while (t --)
#define Test() int t = 1; while (t --)
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
ll F[105], n;
const ll mod = 1e9 + 7;
void sang() {
	ll a[10];
	fill(a, a + 10, 1);
	F[1] = 10;
	for (int i = 2; i <= 100; i ++) {
		for (int j = 1; j <= 9; j ++) {
			ll s = 0;
			for (int k = j; k <= 9; k ++) {
				s += a[k];
			}
			a[j] = s;
			F[i] = (F[i] + s) % mod;
		}
	}
	for (int i = 2; i <= 100; i ++) {
		F[i] = (F[i] + F[i - 1]) % mod;
	}
}
__Tieu_Long__{
	sang();
	Fast();
	Tests() {
		cin >> n;
		cout << F[n] << endl;
	}
	return 0;
}
