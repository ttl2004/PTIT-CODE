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
int check[1000005];
vector<int> nto;
void sang() {
	check[0] = check[1] = 1;
	for (int i = 2; i * i <= 1000005; i ++) {
		if (check[i] == 0) {
			for (int j = i * i; j <= 1000005; j += i) {
				check[j] = 1;
			}
		}
	}
	for (int i = 2; i <= 1000005; i++) {
		if (check[i] == 0) nto.pb(i);
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
		int n;
		cin >> n;
		int length = nto.size(), ok = 0;
		for (int i = 0; i < length; i ++) {
			int x = n - nto[i];
			if (binary_search(nto.begin(), nto.end(), x)) {
				cout << nto[i] << " " << x << endl;
				ok = 1;
				break;
			}
		}
		if (ok == 0) cout << "-1\n";
	}
	return 0;
}
