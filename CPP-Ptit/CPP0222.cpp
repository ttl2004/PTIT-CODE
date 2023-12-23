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
int main() {
	ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> cnt(1e5 + 5, 0);
		for (int i = 0; i < n; i++) {
			set<int> s;
			for (int j = 0; j < n; j ++) {
				int x;
				cin >> x;
				s.insert(x);
			}
			vector<int> a(s.begin(), s.end());
			int len = a.size();
			for (int j = 0; j < len; j++) {
				cnt[a[j]] ++;
			}
		}
		int dem = 0;
		for (int i = 0; i < 1e5 + 5; i++) {
			if (cnt[i] == n) dem ++;
		}
		cout << dem << endl;
	}
	return 0;
}

