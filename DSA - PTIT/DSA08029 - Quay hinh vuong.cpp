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
vector<ll> Xoay_Trai(vector<ll> tmp) {
	vector<ll> a = tmp;
	ll tmp1 = a[0];
	a[0] = a[3];
	ll tmp2 = a[1];
	a[1] = tmp1;
	tmp1 = a[4];
	a[4] = tmp2;
	a[3] = tmp1;
	return a;
}
vector<ll> Xoay_Phai(vector<ll> tmp) {
	vector<ll> a = tmp;
	ll tmp1 = a[1];
	a[1] = a[4];
	ll tmp2 = a[2];
	a[2] = tmp1;
	tmp1 = a[5];
	a[5] = tmp2;
	a[4] = tmp1;
	return a;
}
void solve() {
	vector<ll> a(6), b(6);
	for (int i = 0; i < 6; i ++) cin >> a[i];
	for (int i = 0; i < 6; i ++) cin >> b[i];
	map<vector<ll>, bool> mp;
	queue<pair<vector<ll>, ll>> qe;
	qe.push({a, 0});
	mp[a] = true;
	while (!qe.empty()) {
		pair<vector<ll>, ll> tmp = qe.front();
		qe.pop();
		if (tmp.fi == b) {
			cout << tmp.se << "\n";
			break;
		}
		vector<ll> x = Xoay_Trai(tmp.fi), y = Xoay_Phai(tmp.fi);
		if (!mp[x]) qe.push({x, tmp.se + 1});
		if (!mp[y]) qe.push({y, tmp.se + 1});
	}

}
__Tieu_Long__{
	Fast();
	Tests() {
       solve();
	}
	return 0;
}
