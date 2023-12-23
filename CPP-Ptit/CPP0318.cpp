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
bool check(string s) {
	if (s[5] < s[6] and s[6] < s[7] and s[7] < s[9] and s[9] < s[10]) {
		return true;
	}
	if (s[5] == s[6] and s[6] == s[7] and s[7] == s[9] and s[9] == s[10]) {
		return true;
	}
	if (s[5] == s[6] and s[6] == s[7] and s[9] == s[10]) {
		return true;
	}
	if ((s[5] == '6' or s[5] == '8') and (s[6] == '6' or s[6] == '8') and (s[7] == '6' or s[7] == '8') and (s[9] == '6' or s[9] == '8') and (s[10] == '6' or s[10] == '8') ) {
		return true;
	}
	return false;
}
int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (check(s) == true) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}

//int a[n + 5];vector<int> b(n + 1, INT_MAX);b[0]=INT_MIN;for (int  i = 0; i < n ; i++) cin >> a[i];int result = 0;for (int i = 0; i < n ; i++) {int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();b[k] = a[i];result = max(result, k);}
