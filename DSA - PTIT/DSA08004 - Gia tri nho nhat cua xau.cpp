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
	while (t --) {
		int k;
		cin >> k;
		string s;
		cin >> s;
		int len = s.size();
		int cnt[26] = {};
		for (int i = 0; i < len; i ++) {
			cnt[s[i] - 'A'] ++;
		}
		priority_queue<int, vector<int>, less<int>> pq;
		for (int i = 0; i < 26; i ++) {
			if (cnt[i] > 0) pq.push(cnt[i]);
		}
		while (k > 0) {
			int tmp = pq.top();
			pq.pop();
			tmp -= 1;
			k --;
			pq.push(tmp);
		}
		ll ans = 0;
		while (!pq.empty()) {
			ll f = (ll)pq.top();
			pq.pop();
			ans += f * f;
		}
		cout << ans << endl;
	}
	return 0;
}
