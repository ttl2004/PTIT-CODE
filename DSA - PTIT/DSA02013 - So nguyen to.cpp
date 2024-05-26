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
int check[1005];
vector<string> ans;
void sang() {
	check[0] = check[1] = 1;
	for (int i = 2; i * i <= 304; i ++) {
		if (!check[i]) {
			for (int j = i * i; j <= 304; j += i) check[j] = 1;
		}
	}
}
void Try(int i, int n, int s, int add, vector<int> kq, int &cnt) {
	if (n == 0 && add == s) {
		cnt ++;
		string st;
		for (auto x : kq) st += to_string(x) + " ";
		ans.pb(st);
		return;
	}
	else if (n == 0) return;
	for (int j = i + 1; j <= 304; j ++) {
		if (check[j] == false) {
			kq.pb(j);
			Try(j + 1, n - 1, s, add + j, kq, cnt);
			kq.pop_back();
		}
	}
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	sang();
	int t;
	cin >> t;
	while (t --) {
		int  n, p, s, cnt = 0;
		cin >> n >> p >> s;
		vector<int> kq;
		Try(p, n, s, 0, kq, cnt);
		cout << cnt << endl;
		for (auto x : ans) cout << x << endl;
		ans.clear();
	}
	return 0;
}