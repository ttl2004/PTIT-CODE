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
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		// neu co mot ky tu nao xuat hien voi so lan > len/2 thi se khong the sap dat xau duoc
		string s;
		cin >> s;
		map<char, int> mp;
		int len = s.size(), _max = 0;
		for (int i = 0; i < len; i ++) {
			mp[s[i]] ++;
		}
		for(auto x : mp) {
			_max = max(_max, x.se);
		}
		if (len % 2 != 0) {
			if (_max > len/2 + 1) cout << "0\n";
			else cout << "1\n";
		}
		else {
			if (_max > len/2) cout << "0\n";
			else cout << "1\n";
		}
	}

	return 0;
}
