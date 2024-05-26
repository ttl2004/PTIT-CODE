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
//luy thua chia de tri
ll Pow(ll b, ll a) {
	ll res = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}
//chuyen string sang nguyen
ll Stoll(string a) {
	stringstream ss(a);
	ll f;
	ss >> f;
	return f;
}
//chuyen sang he co so 10
ll Number(string s, ll k) {
	ll f = 0, n = s.size();
	ll m = n - 1;
	for (int i = 0; i < n; i ++) {
		f += (s[i] - '0') * Pow(m ,k);
		m --; 
	}
	return f;
}
__Tieu_Long__{
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		ll k;
		string a, b;
		cin >> k >> a >> b;
		if (k == 10) cout << Stoll(a) + Stoll(b) << endl;
		else {
			ll c = Number(a, k) + Number(b, k);
			string kq;
			//chuyen ket qua tu he 10 ve he k
			while (c > 0) {
				kq = to_string(c % k) + kq;
				c /= k;
			}
			int len = kq.size(), idx = 0;
			while (idx < len - 1 && kq[idx] == '0') kq.erase(kq.begin() + idx); //xoa bit 0 thua o dau chuoi bit he k cua ket qua
			cout << kq << endl;
		}
	}
	return 0;
}
