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
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s1, s2;
		cin >> s1 >> s2;
		int len_1 = s1.size(), len_2 = s2.size();
		int cnt_2[27] = {0};
		for (int i = 0; i < len_2; i ++) cnt_2[s2[i] - 'a'] ++;
		int l, r , min_len = 1e9;
		for (int i = 0; i < len_1; i++) {
			int cnt_1[27] = {0};
			for (int j = i; j < len_1; j++) {
				cnt_1[s1[j] - 'a'] ++;
				bool kt = false;
				for (int f = 0; f < 26; f ++) {
					if (cnt_1[f] < cnt_2[f]) {
						kt = true;
						break;
					}
				}
				if (!kt and min_len > j - i + 1) {
					min_len = j - i + 1;
					l = i;
					r = j;
				}
			}
		}
		if (min_len == 1e9) cout << "-1\n";
		else {
			for (int i = l; i <= r; i ++) cout << s1[i];
			cout << endl;
		}
		//for (auto x: str) cout << x.first << " - " << x.second << endl;
	}
	
	return 0;
}

//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
