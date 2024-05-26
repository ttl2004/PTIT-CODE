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
vector<int> kq;
int check(int n, int i) {
	int tmp = n;
	while (tmp) {
		if (i == tmp % 10) return 0;
		tmp /= 10;
	}
	return 1;
}
void sang() {
	queue<int> qe;
    map<int, bool> mp;
    for (int i = 1; i <= 5; i ++) {
        qe.push(i);
        mp[i] = true;
        kq.pb(i);
	}
	while (!qe.empty()) {
		int tmp = qe.front();
		qe.pop();
		for (int i = 0; i <= 5; i ++) {
			if (check(tmp, i) && (tmp * 10 + i) <= 1e5 && mp[tmp * 10 + i] == false) {
				qe.push(tmp * 10 + i);
				kq.pb(tmp * 10 + i);
			}
		}
	}
}
__Tieu_Long__{
	sang();
	Fast();
	Tests() {
        int l, r;
        cin >> l >> r;
        cout << upper_bound(kq.begin(), kq.end(), r) - upper_bound(kq.begin(), kq.end(), l - 1) << endl;
	}
	return 0;
}
